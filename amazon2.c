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
                    {"Budget" 5000,  2 },
                 }
},

{" Gaming consoles",{
    {" PlayStation", 25000,12 
    {" Xbox",30000, Size: 12 inches
    {" Nintendo",20000, Size: 10 inches
6. TVs
    - LED: ₹40,000, Size: 40 inches
    - OLED: ₹80,000, Size: 55 inches
    - Budget: ₹20,000, Size: 24 inches
7. Headphones
    - Wireless: ₹5,000, Size: 7 inches
    - Wired: ₹2,000, Size: 6 inches
    - Budget: ₹1,000, Size: 5 inches
8. Speakers
    - Home theater: ₹15,000, Size: 10 inches
    - Portable: ₹5,000, Size: 5 inches
    - Budget: ₹2,000, Size: 3 inches
9. Power banks
    - 10,000mAh: ₹1,500, Size: 5 inches
    - 20,000mAh: ₹3,000, Size: 7 inches
    - Budget: ₹500, Size: 3 inches
10. Chargers
    - Fast charger: ₹1,000, Size: 3 inches
    - Standard charger: ₹500, Size: 2 inches
    - Budget: ₹200, Size: 1 inch
}
}
Fashion
1. Clothing (men, women, kids)
    - T-shirts: ₹500, Size: varies
    - Jeans: ₹1,500, Size: varies
    - Dresses: ₹2,000, Size: varies
2. Footwear (shoes, sandals, boots)
    - Sneakers: ₹2,000, Size: varies
    - Heels: ₹3,000, Size: varies
    - Boots: ₹4,000, Size: varies
3. Accessories (hats, scarves, belts)
    - Hats: ₹500, Size: varies
    - Scarves: ₹1,000, Size: varies
    - Belts: ₹1,500, Size: varies
4. Jewelry (necklaces, earrings, rings)
    - Necklaces: ₹5,000, Size: varies
    - Earrings: ₹2,000, Size: varies
    - Rings: ₹3,000, Size: varies
5. Watches
    - Analog: ₹8,000, Size: 1.5 inches
    - Digital: ₹5,000, Size: 1 inch
    - Smartwatch: ₹12,000, Size: 1.5 inches
6. Sunglasses
    - Aviators: ₹2,000, Size: varies
    - Wayfarers: ₹3,000, Size: varies
    - Round: ₹1,500, Size: varies
7. Handbags
    - Tote: ₹4,000, Size: varies
    - Shoulder bag: ₹3,000, Size: varies
    - Clutch: ₹2,000, Size: varies
8. Wallets
    - Leather: ₹1,500, Size: varies
    - Fabric: ₹500, Size: varies
    - Card holder: ₹200, Size: varies
Home and Kitchen
1. Furniture (sofas, beds, tables)
    - Sofa: ₹25,000, Size: 80x40 inches
    - Bed: ₹18,000, Size: 72x36 inches
    - Table: ₹8,000, Size: 40x20 inches
2. Home decor (artwork, rugs, curtains)
    - Artwork: ₹5,000, Size: 20x20 inches
    - Rugs: ₹3,000, Size: 5x7 feet
    - Curtains: ₹2,000, Size: 7x10 feet
3. Kitchen appliances (refrigerators, ovens, mixers)
    - Refrigerator: ₹35,000, Size: 30x20 inches
    - Oven: ₹20,000, Size: 20x15 inches
    - Mixer: ₹8,000, Size: 10x10 inches
4. Cookware (pots, pans, utensils)
    - Pots: ₹2,000, Size: 10x10 inches
    - Pans: ₹1,500, Size: 10x10 inches
    - Utensils: ₹500, Size: varies
5. Dinnerware (plates, bowls, cups)
    - Plates: ₹1,000, Size: 10x10 inches
    - Bowls: ₹800, Size: 8x8 inches
    - Cups: ₹500, Size: 6x6 inches
6. Home security systems
    - CCTV camera: ₹10,000, Size: 5x5 inches
    - Alarm system: ₹8,000, Size: 10x10 inches
7. Gardening tools
    - Rake: ₹500, Size: 30x10 inches
    - Hoe: ₹300, Size: 20x10 inches
    - Watering can: ₹200, Size: 10x10 inches

Health and Beauty
1. Skincare products (creams, serums, moisturizers)
    - Cream: ₹800, Size: 100ml
    - Serum: ₹1,200, Size: 30ml
    - Moisturizer: ₹500, Size: 200ml
2. Haircare products (shampoos, conditioners, oils)
    - Shampoo: ₹300, Size: 200ml
    - Conditioner: ₹400, Size: 200ml
    - Oil: ₹200, Size: 100ml
3. Makeup and cosmetics
    - Foundation: ₹1,000, Size: 30ml
    - Eyeshadow: ₹800, Size: 10x10 inches
    - Lipstick: ₹500, Size: 10x10 inches
4. Fragrances (perfumes, colognes)
    - Perfume: ₹2,000, Size: 50ml
    - Cologne: ₹1,500, Size: 100ml
5. Health supplements (vitamins, proteins)
    - Vitamins: ₹500, Size: 100 tablets
    - Proteins: ₹1,000, Size: 1kg
6. Fitness equipment (treadmills, yoga mats)
    - Treadmill: ₹25,000, Size: 60x20 inches
    - Yoga mat: ₹500, Size: 60x20 inches
7. Medical devices (blood pressure monitors, thermometers)
    - Blood pressure monitor: ₹2,000, Size: 10x10 inches
    - Thermometer: ₹500, Size: 10x10 inches

Baby and Kids
1. Toys (action figures, dolls, puzzles)
    - Action figures: ₹500, Size: 10x10 inches
    - Dolls: ₹800, Size: 20x10 inches
    - Puzzles: ₹300, Size: 10x10 inches
2. Strollers and prams
    - Stroller: ₹8,000, Size: 40x20 inches
    - Pram: ₹5,000, Size: 30x15 inches
3. Car seats
    - Car seat: ₹5,000, Size: 20x15 inches
4. Baby clothing and accessories
    - Clothing: ₹500, Size: varies
    - Accessories: ₹200, Size: varies
5. Kids' furniture (cribs, high chairs)
    - Crib: ₹10,000, Size: 40x20 inches
    - High chair: ₹5,000, Size: 30x15 inches
Sports and Outdoors
1. Fitness equipment (dumbbells, resistance bands) - ₹2,000, Size: 10x10 inches
2. Sports gear (basketballs, soccer balls, tennis rackets) - ₹1,500, Size: 10x10 inches
3. Outdoor gear (tents, sleeping bags, backpacks) - ₹8,000, Size: 20x15 inches
4. Camping equipment (stoves, lanterns) - ₹4,000, Size: 10x10 inches
5. Cycling gear (bicycles, helmets) - ₹15,000, Size: 50x20 inches
6. Water sports equipment (surfboards, kayaks) - ₹20,000, Size: 60x20 inches
7. Hiking and trail gear - ₹5,000, Size: 20x10 inches

Books and Media
1. Books (fiction, non-fiction, textbooks) - ₹500, Size: 10x10 inches
2. E-books - ₹200, Size: digital
3. Audiobooks - ₹300, Size: digital
4. Music CDs - ₹200, Size: 5x5 inches
5. DVDs and Blu-rays - ₹300, Size: 5x5 inches
6. Video games - ₹1,000, Size: 10x10 inches
7. Subscription services (streaming platforms, software) - ₹500, Size: digital

Food and Beverages
1. Gourmet food items (chocolates, cheeses) - ₹1,000, Size: 10x10 inches
2. Specialty teas and coffees - ₹500, Size: 10x10 inches
3. Wine and liquor - ₹2,000, Size: 10x10 inches
4. Fresh produce and meats - ₹500, Size: varies
5. Snacks (chips, nuts, popcorn) - ₹200, Size: 10x10 inches
6. Baking supplies - ₹300, Size: 10x10 inches
7. Cooking ingredients - ₹500, Size: varies

Pet Care
1. Pet food and treats - ₹500, Size: 10x10 inches
2. Pet accessories (collars, leashes, toys) - ₹200, Size: 10x10 inches
3. Pet grooming products - ₹300, Size: 10x10 inches
4. Pet health supplements - ₹500, Size: 10x10 inches
5. Pet furniture (beds, crates) - ₹1,500, Size: 20x15 inches
6. Pet apparel - ₹200, Size: varies
7. Pet training equipment - ₹500, Size: 10x10 inches

Art and Handmade
1. Paintings and artwork - ₹5,000, Size: 20x20 inches
2. Handmade jewelry - ₹2,000, Size: 5x5 inches
3. Crafts (knitted items, pottery) - ₹1,000, Size: 10x10 inches
4. Sculptures - ₹3,000, Size: 10x10 inches
5. Photography - ₹2,000, Size: 10x10 inches
6. Customized items (phone cases, mugs) - ₹500, Size: 5x5 inches
7. Vintage items - ₹1,500, Size: varies

Other
1. Musical instruments - ₹10,000, Size: 40x20 inches
2. Office supplies - ₹500, Size: 10x10 inches
3. School supplies - ₹200, Size: 10x10 inches
4. Travel gear (luggage, adapters) - ₹2,000, Size: 20x15 inches
5. Home improvement tools - ₹1,500, Size: 10x10 inches
6. Industrial equipment - ₹5,000, Size: 20x15 inches
7. Automotive parts and accessories - ₹1,000, Size: 10x10 inches
