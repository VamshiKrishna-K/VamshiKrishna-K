#include<stdio.h>
struct subsub_category{
int cost;
char size[10];
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
struct category cat[0]=
{"Electronics",
    {{"Smartphones",{
                    {"Android" ,{20000," 6 inches" }},
                    {"iPhone: ,{50000,"6 inches" }},
                    {"Budget",{10000,"5 inches" }}
                    }
    },
   {"Laptops",{
                 {"Gaming" ,{80000, "15 inches"}}, 
                 {"Business",{60000, "14 inches"}},
                {"Budget",{30000, "13 inches"}}
                }
   },
 {"Tablets"{
             {"Android" ,{15000, "10 inches"} },
             {"iPad",{30000,"10  inches"}},
              {"Budget",{8000,"7  inches"}}
            }
},
{" Smartwatches",{
                   {" Android", {12000,"1.5 inches"}}, 
                    {"Apple Watch",{25000,"1.5 inches"}},
                    {"Budget" ,{5000,"1 inch" }}
                 }
},

{"Gaming consoles", {
                   {"PlayStation", {25000, "12 inches"}},
                    { "Xbox", {30000, "12 inches"}},
                    { "Nintendo", {20000, "10 inches"}}
                }
 },
{"TVs",    {
               {"LED", {40000," 40 inches"}},
               {"OLED", {80000, "55 inches"}},
               {"Budget", {20000, "24 inches"}}
             }
},
{ "Headphones", {
                  {"Wireless",{ 5000,"7 inches"}},
                  {"Wired", {2000, "6 inches"}},
                   {"Budget", {1000, "5 inches"}}
                 }
        },
{"Speakers", {
             { "Home theater",{15000,"10 inches"}},
              {"Portable" ,{5000,"5 inches"}},
              {"Budget" ,{2000,"3 inches"}}
           }
        },
{"Power banks", {
                  {"10000mAh", {1500, "5 inches"}},
                  {"20000mAh",{ 3000, "7 inches"}},
                   {"Budget",{ 500,"3 inches"}}
                 }
        },
{"Chargers", {
                {"Fast charger", {1000, "3 inches"}},
                {"Standard charger", {500, "2 inches"}},
                {"Budget", {200, "1 inches"}}
            }
       }}
};
struct category cat[1]=
{ "Fashion", 
        {{"Clothing", {
                        {"T-shirts", {500, "varies"}},
                         {"Jeans", {1500, "varies"}},
                         { "Dresses", {2000, "varies"}}
                       }
         },
{ "Footwear", {
                {"Sneakers", {2000, "varies"}},
                { "Heels",{3000, "varies"}},
                {"Boots",{4000, "varies"}}

                }
        },
{"Accessories", {
                  {"Hats" ,{500, "varies"}},
                  { "Scarves",{1000, "varies"}},
                  {"Belts",{1500, "varies"}}
                 }
        },
{"Jewellery", {
                {"Necklaces", {5000, "varies"}},
                { "Earrings",{ 2000, "varies"}},
                {"Rings", {3000, "varies"}}
              }
        },
{ "Watches", {
              { "Analog",{8000, "1.5 inches"}},
            {"Digital",{5000, "1 inches"}},
            { "Smartwatch",{12000, "1.5} inches"}
            }
        },
{ "Sunglasses", {
                   {"Aviators",{2000, "varies"}},
                  {"Wayfarers",{3000, "varies"}},
                   {"Round",{1500, "varies"}}
                 }
        },
{ "Handbags", {
                {"Tote",{4000, "vaires"}},
                {"Shoulder bag",{3000, "varies"}},
                {"Clutch",{2000, "varies"}}
              }
        },
{"Wallets", {
              {"Leather" ,{1500,"varies"}},
            {"Fabric",{500, "varies"}},
           { "Card holder",{200, "varies"}}
            }
    }}
};
struct category cat[2]=
{ "Home and Kitchen",
{{"Furniture", {
                 { "Sofa",{25000,"varies"}},
                { "Bed",{18000,"varies"}},
                { "Table",{8000, "varies"}}
               }
        },
{ "Home decor", {
                {"Artwork",{5000, "varies"}},
                {"Rugs",{3000, "varies"}},
                 {"Curtains",{2000, "varies"}}
                 }
        },
{ "Kitchen appliances", {
                         {"Refrigerator",{35000, "varies"}},
                        {"Oven",{20000, "varies"}},
                        {"Mixer",{8000, "varies"}}
                        }
        },
{"Home security systems", {
                            { "CCTV camera", {10000, "varies"}},
                            { "Alarm system",{ 8000, "varies"}}
                           }
    }
}};
struct category cat[3]=
{"Health and Beauty", 
{{"Skincare", {
                {"Cream",{800, "100ml"}},
                 {"Serum",{1200, "30ml"}},
                  {"Moisturizer",{500, "20ml"}}
              }
        },
{"Haircare", {
                { "Shampoo",{300, "200ml"}},
                { "Conditioner",{400, "200ml"}},
                 { "Oil",{200, "100ml"}}
            }
        },
{ "Makeup", {
              {"Foundation",{1000, "30ml"}},
               {"Eyeshadow",{800, "10x10"}},
               {"Lipstick",{500, "10x10"}}
             }
        },
{ "Fragrances", {
                  { "Perfume",{2000, "50ml"}},
                   {"Cologne",{1500, "100ml"}}
                }
        },
{ "Fitness equipment", {
                          {Treadmill",{25000, "60x20"}},
                             {"Yoga mat",{500, "60x20"}}
                           }
}
    }};
   
struct category cat[4]=
{"Baby and Kids", 
    {{ "Toys", {
                 {"Action figures",{500, "10x10"}},
                  { "Dolls", {800, "20x10"}},
                }
    },
{"Kids furniture", {
{ "Crib", {10000, "40x20"}},
    {"High chair", {5000, "30x15"}}
        }
}
    }},
struct category cat[5]=
{ "Sports and Outdoors",
{{ "Fitness equipment", {
                           {"Dumbbells", {2000, "10x10"}},
                           {"Resistance bands", {1500, "10x10"}}
                           }
            },
{"Outdoor gear", {
                   {"Tents",{8000, "20x15"}},
                   {"Sleeping bags", {5000, "10x10"}}
                  }
}
    }};
struct category cat[6]=
{"Books and Media",
{{"Books", {
             {"Fiction", {500, "10x10"}},
             {"Non-fiction", {500, "10x10"}},
              {"Textbooks", {500, "10x10"}}
            }
        },
{"E-books", {
              {"Digital", {200, "N/A"}}
             }
        },
{"Music", {
             {"CDs", {200, "5x5"}},
             { "DVDs", {300, "5x5"}}
        }
}
    }};
struct category cat[7]=
{"Food and Beverages",
{{ "Gourmet food", {
                      {"Chocolates", {1000, "10x10"}},
                       {"Cheeses", {1000, "10x10"}}
                    }
        },
{"Specialty drinks", {
                        {"Tea", {500, "10x10"}},
                        {"Coffee", {500, "10x10"}}
                     }
}
    }};
 struct category cat[8]=           
{"Pet Care",
        {{"Pet food", {     }},
          {"Dog food", {500, "10x10"}},
          {"Cat food",{500, "10x10"}}
        },
{"Pet accessories", {
            {"Collars", {200, "10x10"}},
            {"Leashes", {200, "10x10"}}
        }
}
    }};
}
        
    

