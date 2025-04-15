#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct subsub_category {
    long int cost;
    char type[50];
};

struct sub_category {
    char product[50];
    struct subsub_category s[3];
};

struct category {
    char c[50];
    struct sub_category m[10];
};

int main() {
    int i, a[10], b[10], c[10], Cost[30], p = 0, q = 0, r = 0, h = 0, j;
    long long int phnum;
    char name[30], pay[20], date[20], category_name[20][20], product_name[20][20], subcat_name[20][20];
    int choice, subchoice, k, selectproduct, exit,discount_percent;
    long int Amount,totalcost=0;
    struct category cat[9] = {
	{"1.Electronics",
	    {
		{"1.Smart phones", {
		    {20000, "1.Oppo"},
		    {23000, "2.Vivo pro"},
		    {10000, "3.iphone"}
		}},
		{"2.Laptops", {
		    {80000, "1.Ultrabooks"},
		    {60000, "2.Gaming laptops"},
		    {30000, "3.Chrome laptops"}
		}},
		{"3.Tablets", {
		    {15000, "1.Android tablets"},
		    {30000, "2.iPads"},
		    {8000, "3.Rugged tablets"}
		}},
		{"4.Smartwatches", {
		    {1200, "1.Mens wear"},
		    {2500, "2.Women ware"},
		    {500, "3.Childrenware"}
		}},
		{"5.Gaming consoles", {
		    {25000, "1.12 inches"},
		    {30000, "2.12 inches"},
		    {20000, "3.10 inches"}
		}},
		{"6.TVs", {
		    {40000, "1.LED/LCD Tvs"},
		    {80000, "2.OLED TVs"},
		    {20000, "3.4K Tvs"}
		}},
		{"7.Headphones", {
		    {5000, "1.Wirless"},
		    {2000, "2.Over-ear headphones"},
		    {1000, "3.On-ear headphones"}
		}},
		{"8.Speakers", {
		    {15000, "1.10 inches"},
		    {5000, "2.5 inches"},
		    {2000, "3.3 inches"}
		}},
		{"9.Power banks", {
		    {1500, "1.Solar powerbanks"},
		    {3000, "2.Wireless powerbank"},
		    {500, "3.Rugged powerbanks"}
		}},
		{"10.Chargers", {
		    {1000, "1.C type"},
		    {500, "2.Car charger"},
		    {200, "3.Wall charger"}
		}}
	    }
	},
	{"2.Fashion",
	    {
		{"1.Clothing", {
		    {500, "1.Small"},
		    {1500, "2.Medium"},
		    {2000, "3.XL"}
		}},
		{"2.Footwear", {
		    {2000, "1.Nike"},
		    {3000, "2.Bata"},
		    {4000, "3.Paragon"}
		}},
		{"3.Accessories", {
		    {50, "1.Rings"},
		    {140, "2.Bracelets"},
		    {100, "3.Watches"}
		}},
		{"4.Jewellery", {
		    {50000, "1.Gold chain(5gm"},
		    {2000, "2.Gold ring(2gm)"},
		    {3000, "3.Silver chain"}
		}},
		{"5.Watches", {
		    {2090, "1.Smart watches"},
		    {8020, "2.Analog wathces"},
		    {12000, "3.Luxury watches"}
		}},
		{"6.Sunglasses", {
		    {999, "1.Round sunglasses"},
		    {2000, "2.Aviator sunglasses"},
		    {1500, "3.Wayfarer glasses"}
		}},
		{"7.Handbags", {
		    {800, "1.Shoulder bages"},
		    {1000, "2.Tote bags"},
		    {1500, "3.Backpacks"}
		}},
		{"8.Wallets", {
		    {100, "1.Slim wallets"},
		    {560, "2.Bifold wallets"},
		    {220, "3.Trifold wallets"}
		}}
	    }
	},
	{"3.Home and Kitchen",
	    {
		{"1.Furniture", {
		    {25990, "1.Sofas"},
		    {18070, "2.armchairs"},
		    {8000, "3.Dinning table"}
		}},
		{"2.Home decor", {
		    {5980, "1.Wall art"},
		    {3990, "2.Candles"},
		    {2550, "3.Floor lamps"}
		}},
		{"3.Kitchen appliances", {
		    {35080, "1.Refridgerators"},
		    {20800, "2.Oven"},
		    {8780, "3.Microwaves"}
		}},
		{"4.Home security systems", {
		    {3060, "1.Door locks"},
		    {5900, "2.Security cameras"},
		    {799, "3.Audible Sirens"}
		}}
	    }
	},
	{"4.Health and Beauty",
	    {
		{"1.Skincare", {
		    {800, "1.Moisturizing(300gm)"},
		    {1200, "2.Serum(90gm)"},
		    {500, "3.sunscreen(90gm"}
		}},
		{"2.Haircare", {
		    {300, "1.Sampoos(20)"},
		    {400, "2.Hair masks"},
		    {200, "3.Hair oils"}
		}},
		{"3.Makeup", {
		    {1000, "1.Foundation"},
		    {750, "2.Eyeshadow"},
		    {399, "3.Lipstick"}
		}},
		{"4.Fragrances", {
		    {2099, "1.Fogg"},
		    {1560, "2.Sweet heart"},
		    {1030, "3.Dior Sauvage"}
		}},
		{"5.Fitness equipment", {
		    {25000, "1.Treadmill"},
		    {5000, "2.Gym pullysystem"},
		    {1000, "3.Hand gripper"}
		}}
	    }
	},
	{"5.Baby and Kids",
	    {
		{"1.Toys", {
		    {300, "1.Cars"},
		    {80, "2.Bikes"},
		    {1000, "3.Kitchen pack"}
		}},
		{"2.Kids furniture", {
		    {10000, "1.Desks"},
		    {5000, "2.Piklers"},
		    {10000, "3.Play kits"}
		}}
	    }
	},
	{"6.Sports and Outdoors",
	    {
		{"1.Fitness equipment", {
		    {2000, "1.Rowing machines"},
		    {1500, "2.Stair climbers"},
		    {3000, "3.Barebellss"}
		}},
		{"2.Outdoor gear", {
		    {8000, "1.Camping gear"},
		    {5000, "2.Hiking gear"},
		    {10000, "3.Climbing gear"}
		}}
	    }
	},
	{"7.Books and Media",
	    {
		{"1.Books", {
		    {500, "1.Notebooks"},
		    {500, "2.Guides"},
		    {500, "3.Stories"}
		}},
		{"2.E-books", {
		    {690, "1.The Hunger games"},
		    {299, "2.Jane Eyre"},
		    {750, "3.Pride and prejudice"}
		}},
		{"3.Music", {
		    {200, "1.CD"},
		    {300, "2.speaker"},
		    {5000, "3.speakers"}
		}}
	    }
	},
	{"8.Food and Beverages",
	    {
		{"1.Gourmet food", {
		    {600, "1.Pizza"},
		    {1000, "2.Biryani"},
		    {1000, "3.Jumbo biryani"}
		}},
		{"2.Specialty drinks", {
		    {120, "1.Thumbsup"},
		    {25, "2.Spirit"},
		    {50, "3.Maza"}
		}}
	    }
	},
	{"9.Pet Care",
	    {
		{"1.Pet food", {
		    {500, "1.Biscuits"},
		    {200, "2.Drinks"},
		    {200, "3.Chocolates"}
		}},
		{"2.Pet accessories", {
		    {200, "1.Fashion items"},
		    {1000, "2.Clothes"},
		    {300, "3.Medicines"}
		}}
	    }
	}
    };
      clrscr();
    do {
	for (i = 0; i < 9; i++)
	    printf("%s\n", cat[i].c);

	printf("Enter the type of product you want: ");
	scanf("%d", &choice);clrscr();
	a[p++] = choice;

	switch (choice) {
	    case 1: k = 10; break;
	    case 2: k = 8; break;
	    case 3: k = 4; break;
	    case 4: k = 5; break;
	    case 5: k = 2; break;
	    case 6: k = 2; break;
	    case 7: k = 3; break;
	    case 8: k = 2; break;
	    case 9: k = 2; break;
	    default: k = 0; break;
	}

	for (i = 0; i < k; i++)
	    printf("%s\n", cat[choice - 1].m[i].product);

	printf("Enter subcategory number: ");
	scanf("%d", &subchoice);clrscr();
	b[q++] = subchoice;

	for (i = 0; i < 3; i++) {
	    printf("%s %d\n", cat[choice - 1].m[subchoice - 1].s[i].type,cat[choice - 1].m[subchoice - 1].s[i].cost);
	}

	printf("Select the product number: ");
	scanf("%d", &selectproduct);
	c[r++] = selectproduct; clrscr();

	totalcost += cat[choice - 1].m[subchoice - 1].s[selectproduct - 1].cost;

	printf("Do you want to continue shopping? (1 = yes, 0 = no): ");
	scanf("%d", &exit); clrscr();

	h++;

    } while (exit == 1);
    if(totalcost>=10000)
    {
	discount_percent=15;
    }
    else if(totalcost>=5000)
    {
	discount_percent=10;
    }
    else if(totalcost>=2000)
    {
	discount_percent=5;
    }
    for (i = 0; i < h; i++) {
	strcpy(category_name[i], cat[a[i] - 1].c + 2);
	strcpy(subcat_name[i], cat[a[i] - 1].m[b[i] - 1].product + 2);
	strcpy(product_name[i], cat[a[i] - 1].m[b[i] - 1].s[c[i] - 1].type + 2);
	Cost[i] = cat[a[i] - 1].m[b[i] - 1].s[c[i] - 1].cost;
    }
    printf("We appreciate your loyality and we want to show our gratitude through exclusive discounts\n");
    printf("2000 and above:5 percent discount\n");
    printf("5000 and above:10 percent discount\n");
    printf("10000 and above:15 percent discount\n");

    //After discount;
    Amount=totalcost-((discount_percent*totalcost)/100);


    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Enter phone number: \n");
    scanf("%lld", &phnum);
    printf("Mode of payment (enter account number): \n");
    scanf("%s", pay);
    printf("Enter date: \n");
    scanf("%s", date);


    printf("\n--------------------- INVOICE ---------------------\n");
    printf("Issued To: %-30s Invoice No: 01234\n", name);
    printf("Date: %-40s\n", date);
    printf("Phone: %lld\n", phnum);
    printf("Miyapur Road No. 123/56a/b234\n");
    printf("----------------------------------------------------\n");
    printf("Category         Subcategory        Product           Cost\n");
    printf("----------------------------------------------------\n");

    for (i = 0; i < h; i++) {
	printf("%-16s %-18s %-18s %d\n", category_name[i], subcat_name[i], product_name[i], Cost[i]);
    }

    printf("----------------------------------------------------\n");
    printf("%50s %d\n", "Total Cost:", totalcost);
    printf("%50s %d\n", "Discount:", discount_percent);
    printf("%50s %d\n", "Amount:", Amount);
    printf("Paid via account number: %s\n", pay);
    printf("----------------------------------------------------\n");
    printf("Thank you for shopping with us!\nStay with us\nBest shopping platform\n");
    getch();  clrscr();
    return 0;
}