#include <iostream>
#include <string>
using namespace std;
int main()
 {
    // ---------------------------------------------------------
    // BASIC SYSTEM VARIABLES
    // ---------------------------------------------------------
    string name;
    string password;
    char restart;

    do 
	{
        // Variables Initialization
        int gameChoice = 0, hours = 0, subChoice = 0, snackChoice = 0, snackQty = 0;
        int extraChoice = 0, serviceChoice = 0;
        double gamePrice = 0, gameTotal = 0, subCost = 0, discRate = 0;
        double snackPrice = 0, snackTotal = 0, servicePrice = 0, serviceTotal = 0;
        double discAmount = 0, finalBill = 0, totalBeforeDiscount = 0;
        
        string gameName = "", subName = "", snackName = "None", serviceName = "None";
        bool isPremium = false;

        cout << "********************************************************" << endl;
        cout << "* PREMIUM GAMING HUB - COMPLETE SYSTEM *" << endl;
        cout << "********************************************************" << endl;

        // SECTION 1: LOGIN
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "Set Password: ";
        cin >> password;

        // SECTION 2: GAME MENU
        cout << "\n--- CHOOSE A GAME ---" << endl;
        cout << "1. GTA V (Rs.200)" << endl;
		cout << "2. FIFA 24 (Rs.150)" << endl;
		cout << "3. Minecraft (Rs.100)" << endl;
        cout << "4. Valorant (Rs.120) " << endl;
		cout << "5. Freefire (Rs.130) "<<endl;
	    cout << "6. Subway Surf (Rs.180)" << endl;
        cout << "7. Temple Run (Rs.210) " << endl;
		cout << "8. Cyberpunk (Premium-Rs.400)" <<endl;
		cout << "9. Spider-Man (Premium-Rs.450)" << endl;
        cout << "10. Elden Ring (Premium-Rs.500)" << endl; 
		cout << "11. Tekken 8 (Premium-Rs.350)" << endl;
		cout << "12. BGMI (Premium-Rs.550)" << endl;
        cout << "13. God of War (Premium-Rs.600)  "<< endl;
		cout << "14. Starfield (Premium-Rs.480) " <<endl;
		cout << "15. VR Boxing (Premium-Rs.700)" << endl;

        while (true) {
            cout << "Game ID (1-15): ";
            cin >> gameChoice;
            if (gameChoice >= 1 && gameChoice <= 15) break;
            else cout << "INVALID! Enter 1-15." << endl;
        }

        // Processing Game Data
        if (gameChoice == 1) { gameName = "GTA V"; gamePrice = 200; isPremium = false; }
        else if (gameChoice == 2) { gameName = "FIFA 24"; gamePrice = 150; isPremium = false; }
        else if (gameChoice == 3) { gameName = "Minecraft"; gamePrice = 100; isPremium = false; }
        else if (gameChoice == 4) { gameName = "Valorant"; gamePrice = 120; isPremium = false; }
        else if (gameChoice == 5) { gameName = "Freefire"; gamePrice = 130; isPremium = false; }
        else if (gameChoice == 6) { gameName = "Subway Surf"; gamePrice = 180; isPremium = false; }
        else if (gameChoice == 7) { gameName = "Temple Run"; gamePrice = 210; isPremium = false; }
        else if (gameChoice == 8) { gameName = "Cyberpunk"; gamePrice = 400; isPremium = true; }
        else if (gameChoice == 9) { gameName = "Spider-Man"; gamePrice = 450; isPremium = true; }
        else if (gameChoice == 10) { gameName = "Elden Ring"; gamePrice = 500; isPremium = true; }
        else if (gameChoice == 11) { gameName = "Tekken 8"; gamePrice = 350; isPremium = true; }
        else if (gameChoice == 12) { gameName = "BGMI"; gamePrice = 550; isPremium = true; }
        else if (gameChoice == 13) { gameName = "God of War"; gamePrice = 600; isPremium = true; }
        else if (gameChoice == 14) { gameName = "Starfield"; gamePrice = 480; isPremium = true; }
        else if (gameChoice == 15) { gameName = "VR Boxing"; gamePrice = 700; isPremium = true; }

        // SECTION 3: MEMBERSHIP
        cout << "\n--- MEMBERSHIP ---" << endl;
        cout << "1. Silver (Rs.250-10% Off) " <<endl;
		cout << "2. Gold (Rs.500-20% Off)" << endl;
        cout << "3. Platinum (Rs.800-35% Off)" <<endl;
		cout << "4. None (Rs.0)" << endl;

        while (true) {
            cout << "Choice: ";
            cin >> subChoice;
            if (subChoice >= 1 && subChoice <= 4) break;
            else cout << "INVALID! Enter 1-4." << endl;
        }

        if (subChoice == 1) { subName = "Silver"; subCost = 250; discRate = 0.10; }
        else if (subChoice == 2) { subName = "Gold"; subCost = 500; discRate = 0.20; }
        else if (subChoice == 3) { subName = "Platinum"; subCost = 800; discRate = 0.35; }
        else { subName = "None"; subCost = 0; discRate = 0.00; }

        // SECTION 4: PREMIUM CHECK
        if (isPremium == true && subChoice == 4) {
            cout << "\n!! ERROR: This Game requires Membership. Bill Canceled. !!" << endl;
        } 
        else {
            cout << "How many hours? ";
            cin >> hours;
            gameTotal = gamePrice * hours;

            // SECTION 5: EXTRA SERVICES (NEW LOGIC)
            cout << "\nDo you want any Extra Services? (1 for Yes / 0 for No)? ";
			 while (true) 
			 {
            cout << "Choice: ";
            cin >> subChoice;
            if (subChoice >= 0 && subChoice <= 1) break;
            else
			 cout << "INVALID! Enter 0-1." << endl;
        }

            if (extraChoice == 1)
			 {
                cout << "\n--- EXTRA SERVICES MENU ---" << endl;
                cout << "1. High Speed Internet (Rs.100)" << endl;
                cout << "2. Private Cabin (Rs.300)" << endl;
                cout << "3. Pro Gaming Mouse (Rs.50)" << endl;
                cout << "4. Noise Cancel Headset (Rs.100)" << endl;
                
                while (true) {
                    cout << "Select Service ID: ";
                    cin >> serviceChoice;
                    if (serviceChoice >= 1 && serviceChoice <= 4) break;
                    else cout << "Invalid Service ID!" << endl;
                }

                if (serviceChoice == 1) { serviceName = "High Speed Net"; servicePrice = 100; }
                else if (serviceChoice == 2) { serviceName = "Private Cabin"; servicePrice = 300; }
                else if (serviceChoice == 3) { serviceName = "Pro Mouse"; servicePrice = 50; }
                else if (serviceChoice == 4) { serviceName = "Pro Headset"; servicePrice = 100; }
                
                serviceTotal = servicePrice;
                cout << "Service Added: " << serviceName << endl;
            }

            // SECTION 6: SNACKS
            cout << "\n[ SNACKS ]";
			cout << "\n 1.Pepsi(80) ";
			cout << "\n 2.Monster(400) ";
			cout << "\n 3.Zinger(450) "; 
			cout << "\n 4.Fries(200) ";
			
            while (true) {
                cout << "Choice: ";
                cin >> snackChoice;
                if (snackChoice >= 1 && snackChoice <= 5) break;
                else cout << "Invalid ID!" << endl;
            }

            if (snackChoice >= 1 && snackChoice <= 10) {
                cout << "Quantity: "; cin >> snackQty;
                if (snackChoice == 1) { snackName = "Pepsi"; snackPrice = 80; }
                else if (snackChoice == 2) { snackName = "Monster"; snackPrice = 400; }
                else if (snackChoice == 3) { snackName = "Zinger"; snackPrice = 450; }
                else if (snackChoice == 4) { snackName = "Fries"; snackPrice = 200; }
                snackTotal = snackPrice * snackQty;
            }
            

            // Final Calculations
            totalBeforeDiscount = gameTotal + snackTotal + serviceTotal;
            discAmount = totalBeforeDiscount * discRate;
            finalBill = (totalBeforeDiscount - discAmount) + subCost;

            // SECTION 7: FINAL RECEIPT
            cout << "\n================= FINAL RECEIPT =================" << endl;
            cout << "Customer : " << name << endl;
            cout << "Game : " << gameName << " (Rs." << gameTotal << ")" << endl;
            cout << "Service : " << serviceName << " (Rs." << serviceTotal << ")" << endl;
            cout << "Snacks : " << snackName << " (Rs." << snackTotal << ")" << endl;
            cout << "Discount : -Rs." << discAmount << endl;
            cout << "TOTAL : Rs." << finalBill << endl;
            cout << "=================================================" << endl;

            // SECTION 8: STAR RATING
            int stars;
            cout << "\n--- RATE OUR SERVICE (1-5 Stars) ---" << endl;
            while (true) {
                cin >> stars;
                if (stars >= 1 && stars <= 5) break;
                else cout << "Rate 1-5 only: ";
            }
            cout << "Rating: ";
            for(int i=0; i<stars; i++) cout << "*";
            if (stars >= 4) cout << " (Excellent Choice!)" << endl;
            else cout << " (Thanks for the feedback)" << endl;
        }

        cout << "\nAnother customer? (y/n): ";
        cin >> restart;

    } while (restart == 'y' || restart == 'Y');

    cout << "\nThanks for coming. SYSTEM SHUTDOWN..." << endl;
    return 0;
}

