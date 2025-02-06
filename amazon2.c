#include<stdio.h>
struct subsub_category{
int cost,size;
}
struct sub_category{
char product[20];
struct subsub-category s[3];
}
struct category {
char cat[30];
struct sub_category m[10]
}
void main()
{
FILE *k;
k=fopen("amazonsource.bin","wb");
struct category cat[0]=
{"Electronics",
    {{"Smartphones",{
                    {"Android" ,20000, 6 },
                    {"iPhone: ,50000,6 },
                    {"Budget",10000,5 }
                    }
    },
   {"Laptops",{
                 {"Gaming" ,80000,  15}, 
                 "Business",60000, 14},
                 "Budget",30000, 13}
                }
   },
 {"Tablets"{
             {"Android" ,15000, 10 },
             {"iPad",30000,  10 },
              {"Budget",8000,  7 }
            }
},
{" Smartwatches",{
                   {" Android", 12000,  2}, 
                    {"Apple Watch"25000,  2},
                    {"Budget" 5000,  2 }
                 }
},

{"Gaming consoles", {
                   {"PlayStation", 25000, 12},
                    { "Xbox", 30000, 12},
                    { "Nintendo", 20000, 10}
                }
 },
{"TVs",    {
               {"LED", 40000, 40},
               {"OLED", 80000, 55},
               {"Budget", 20000, 24}
             }
},
{ "Headphones", {
                  {"Wireless", 5000, 7},
                  {"Wired", 2000, 6},
                   {"Budget", 1000, 5}
                 }
        },
{"Speakers", {
             { "Home theater",15000, 10},
              {"Portable" ,5000, 5},
              {"Budget" ,2000, 3}
           }
        },
{"Power banks", {
                  {"10000mAh", 1500, 5},
                  {"20000mAh", 3000, 7},
                   {"Budget", 500, 3}
                 }
        },
{"Chargers", {
                {"Fast charger", {1000, 3},
                {"Standard charger", {500, 2},
                {"Budget", {200, 1}
            }
       }}
};
struct category cat[1]=
{ "Fashion", 
        {{"Clothing", {
                        {"T-shirts", {500, "varies"},
                         {"Jeans", {1500, "varies"},
                         { "Dresses", {2000, "varies"}
                       }
         },
{ "Footwear", {
                {"Sneakers", 2000, "varies"},
                { "Heels",3000, "varies"},
                {"Boots",4000, "varies"}

                }
        },
{"Accessories", {
                  {"Hats" ,500, "varies"},
                  { "Scarves",1000, "varies"},
                  {"Belts",1500, "varies"}
                 }
        },
{"Jewellery", {
                {"Necklaces", 5000, "varies"},
                { "Earrings", 2000, "varies"},
                {"Rings", 3000, "varies"}
              }
        },
{ "Watches", {
              { "Analog",8000, 1.5},
            {"Digital",5000, 1},
            { "Smartwatch",12000, 1.5}
            }
        },
{ "Sunglasses", {
                  {"Aviators",2000, 0},
                  { "Wayfarers",3000, 0},
                   { "Round",1500, 0}
        },
{ "Handbags", {
                { "Tote",4000, 0},
                  {"Shoulder bag",3000, 0},
                 {"Clutch",2000, 0}
              }
        },
{"Wallets": {
              {"Leather" ,1500,0},
            {"Fabric",500, 0},
           { "Card holder",200, 0}
            }
    }}
};
struct category cat[2]=
{{ "Home and Kitchen",
{ "Furniture", {
                 { "Sofa",25000, "80x40"},
                { "Bed",18000, "72x36"},
                { "Table",8000, "40x20"}
               }
        },
        "Home decor": {
            "Artwork": {5000, "20x20"},
            "Rugs": {3000, "5x7"},
            "Curtains": {2000, "7x10"}
        },
        "Kitchen appliances": {
            "Refrigerator": {35000, "30x20"},
            "Oven": {20000, "20x15"},
            "Mixer": {8000, "10x10"}
        },
        "Home security systems": {
            "CCTV camera": {10000, "5x5"},
            "Alarm system": {8000, "10x10"}
        }
    },
    "Health and Beauty": {
        "Skincare": {
            "Cream": {800, "100ml"},
            "Serum": {1200, "30ml"},
            "Moisturizer": {500, "200ml"}
        },
        "Haircare": {
            "Shampoo": {300, "200ml"},
            "Conditioner": {400, "200ml"},
            "Oil": {200, "100ml"}
        },
        "Makeup": {
            "Foundation": {1000, "30ml"},
            "Eyeshadow": {800, "10x10"},
            "Lipstick": {500, "10x10"}
        },
        "Fragrances": {
            "Perfume": {2000, "50ml"},
            "Cologne": {1500, "100ml"}
        },
        "Fitness equipment": {
            "Treadmill": {25000, "60x20"},
            "Yoga mat": {500, "60x20"}
        }
    },
    "Baby and Kids": {
        "Toys": {
            "Action figures": {500, "10x10"},
            "Dolls": {800, "20x10"},
            "Puzzles": {300, "10x10"}
        },
        "Strollers": {
            "Stroller": {8000, "40x20"},
            "Pram": {5000, "30x15"}
        },
        "Kids furniture": {
            "Crib": {10000, "40x20"},
            "High chair": {5000, "30x15"}
        }
    },
    "Sports and Outdoors": {
        "Fitness equipment": {
            "Dumbbells": {2000, "10x10"},
            "Resistance bands": {1500, "10x10"}
        },
        "Outdoor gear": {
            "Tents": {8000, "20x15"},
            "Sleeping bags": {5000, "10x10"}
        }
    },
    "Books and Media": {
        "Books": {
            "Fiction": {500, "10x10"},
            "Non-fiction": {500, "10x10"},
            "Textbooks": {500, "10x10"}
        },
        "E-books": {
            "Digital": {200, "N/A"}
        },
        "Music": {
            "CDs": {200, "5x5"},
            "DVDs": {300, "5x5"}
        }
    },
    "Food and Beverages": {
        "Gourmet food": {
            "Chocolates": {1000, "10x10"},
            "Cheeses": {1000, "10x10"}
        },
        "Specialty drinks": {
            "Tea": {500, "10x10"},
            "Coffee": {500, "10x10"}
        }
    },
    "Pet Care": {
        "Pet food": {
            "Dog food": {500, "10x10"},
            "Cat food": {500, "10x10"}
        },
        "Pet accessories": {
            "Collars": {200, "10x10"},
            "Leashes": {200, "10x10"}
        }
    }

