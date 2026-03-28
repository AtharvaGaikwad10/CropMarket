#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include<fstream>
#include<sstream>

using namespace std;


class login {
protected:
    unordered_map<string, string> users;
    string username, password;


public:
    bool run() {
        

        while (true) {
            cout << "WELCOME\n1. Log in\n2. Sign up\n0. Exit\n";
            cout << "Choose option: ";
            int a, b;
            cin >> a;

            switch (a) {
                case 1: {
                    reenter:
                    string storedname,storedpassword;
                    cout << "Enter username: ";
                    cin.ignore();
                    getline(cin,username);
                    cout << "Enter password: ";
                    cin >> password;

                    ifstream info("userinfo.txt");
                    bool isCorrect=false;
                    while(getline(info,storedname,',') && 
                          getline(info,storedpassword)){

                    if (storedname==username && storedpassword==password) {
                        cout << "Hello " << username << "!! Welcome Back\n";
                        
                        isCorrect=true;
                        return true;
                        
                    } 
                }
                   if(isCorrect==false){
                    int b;

                    cout<<"Incorrect username or password...."<<endl;
                    cout<<"1.Retry\n0.Exit\n";
                    cout<<"Enter choice : ";
                    cin>>b;
                    if(b==1){
                        goto reenter;
                    }else break;
                    
                   }
                    
                
                break;
            }
                

                case 2: {
                    cout << "Enter username: ";
                    cin.ignore();
                    getline(cin,username);

                    bool passwordsMatch = false;
                    do {
                        cout << "Enter password: ";
                        cin >> password;
                        cout << "Reenter password: ";
                        string password_re;
                        cin >> password_re;

                        if (password == password_re) {
                            passwordsMatch = true;
                            users[username] = password;
                            cout << "Your account has been created\n";
                            ofstream info("userinfo.txt",ios::app);
                            info<<username<<","<<password<<endl;

                        } else {
                            cout << "Passwords don't match. Try again.\n";
                        }
                    } while (!passwordsMatch);
                    break;
                }

                case 0:
                    return false;

                default:
                    cout << "Wrong input\n";
            }
        }
    }

    string getusername(){       //Getter for Username
        return username;
    }

};


class buyer : public login {
    private:
        int amount, choice, quant;

    public:
        
        int temp2=3, temp1;
        vector<vector<int>> cart;  //{'prdt id or choice', 'quantity', 'amount'}

        void disp_list(){
            cout<<"Select the desired product :\n1.Wheat\n2.Jowar\n3.Bajra\n4.Maize\n5.Barley\n( 6. EXIT     7. Visit Cart )\n";
            cout<<"Enter your choice : ";
            cin>>choice;

            string cropname,sellid,grade,quant,r50,r100,r;
            bool isAvailable=false;

            ifstream info7("cropinfo.txt");
            


            switch(choice){
                case 1:
                while(getline(info7,sellid,',') && 
                      getline(info7,cropname,',') && 
                      getline(info7,grade,',') && 
                      getline(info7,quant,',') &&
                      getline(info7,r50,',') &&
                      getline(info7,r100,',') &&
                      getline(info7,r)){
                    if(cropname=="1"){
                        isAvailable=true;
                        
                        cout<<sellid<<"\n"<<"Wheat"<<" "<<"Grade : "<<grade<<"\n"<<
                        "Quantity available : "<<quant<<"\n"<<"Rate below 50kg : "<<r50<<"\n"<<
                        "Rate between 50-100kg : "<<r100<<"\n"<<"Rate above 100kg : "<<r<<endl;

                    }
                }

                break;

                case 2:
                while(getline(info7,sellid,',') && 
                      getline(info7,cropname,',') && 
                      getline(info7,grade,',') && 
                      getline(info7,quant,',') &&
                      getline(info7,r50,',') &&
                      getline(info7,r100,',') &&
                      getline(info7,r)){
                    if(cropname=="2"){
                        isAvailable=true;
                        if(r=="0"){
                            r="-";
                        }
                        if(r100=="0"){
                            r100="-";
                        }
                        cout<<sellid<<"\n"<<"Wheat"<<" "<<"Grade : "<<grade<<"\n"<<
                        "Quantity available : "<<quant<<"\n"<<"Rate below 50kg : "<<r50<<"\n"<<
                        "Rate between 50-100kg : "<<r100<<"\n"<<"Rate above 100kg : "<<r<<endl;

                    }
                }
                break;

                case 3:
                while(getline(info7,sellid,',') && 
                      getline(info7,cropname,',') && 
                      getline(info7,grade,',') && 
                      getline(info7,quant,',') &&
                      getline(info7,r50,',') &&
                      getline(info7,r100,',') &&
                      getline(info7,r)){
                    if(cropname=="3"){
                        isAvailable=true;
                        if(r=="0"){
                            r="-";
                        }
                        if(r100=="0"){
                            r100="-";
                        }
                        cout<<sellid<<"\n"<<"Wheat"<<" "<<"Grade : "<<grade<<"\n"<<
                        "Quantity available : "<<quant<<"\n"<<"Rate below 50kg : "<<r50<<"\n"<<
                        "Rate between 50-100kg : "<<r100<<"\n"<<"Rate above 100kg : "<<r<<endl;

                    }
                }
                break;

                case 4:
                while(getline(info7,sellid,',') && 
                      getline(info7,cropname,',') && 
                      getline(info7,grade,',') && 
                      getline(info7,quant,',') &&
                      getline(info7,r50,',') &&
                      getline(info7,r100,',') &&
                      getline(info7,r)){
                    if(cropname=="4"){
                        isAvailable=true;
                        if(r=="0"){
                            r="-";
                        }
                        if(r100=="0"){
                            r100="-";
                        }
                        cout<<sellid<<"\n"<<"Wheat"<<" "<<"Grade : "<<grade<<"\n"<<
                        "Quantity available : "<<quant<<"\n"<<"Rate below 50kg : "<<r50<<"\n"<<
                        "Rate between 50-100kg : "<<r100<<"\n"<<"Rate above 100kg : "<<r<<endl;

                    }
                }
                break;

                case 5:
                while(getline(info7,sellid,',') && 
                      getline(info7,cropname,',') && 
                      getline(info7,grade,',') && 
                      getline(info7,quant,',') &&
                      getline(info7,r50,',') &&
                      getline(info7,r100,',') &&
                      getline(info7,r)){
                    if(cropname=="5"){
                        isAvailable=true;
                        if(r=="0"){
                            r="-";
                        }
                        if(r100=="0"){
                            r100="-";
                        }
                        cout<<sellid<<"\n"<<"Wheat"<<" "<<"Grade : "<<grade<<"\n"<<
                        "Quantity available : "<<quant<<"\n"<<"Rate below 50kg : "<<r50<<"\n"<<
                        "Rate between 50-100kg : "<<r100<<"\n"<<"Rate above 100kg : "<<r<<endl;

                    }
                }
                break;

                case 6:
                return;
                break;

                case 7:
                break;
            }
                
                

        }

        int getchoice(){        //Getter for choice
            return choice;
        }



        void transaction(){

            cout<<"Do you want to buy this product?\n(1. Yes 2. No) : ";
            cin>>temp1;
            
            if(temp1==1){
                cout<<"How much do you wish to buy? : ";
                cin>>quant;

                if(quant>100){
                    amount=1000*quant;    // Temporarily replacing pLast by 1000
                }
                else if(quant>50){
                    amount=900*quant;     // Temporarily replacing p100 by 900
                }
                else{
                    amount=800*quant;      // Temporarily replacing p50 by 800
                }

                cout<<"Total amount = "<<amount;

                cout<<"\n1. Add to cart and buy more \n2. Checkout \n3. Discard this item \n";
                cin>>temp2;

                if(temp2==1){
                    cart.push_back({choice, quant, amount});
                    return;
                }
                else if(temp2==2){
                    cart.push_back({choice, quant, amount});
                    return;
                }
                else if(temp2==3){
                    return;
                }
                ofstream info5("cart.txt" , ios::app);
                for(int i=0;i<cart.size();i++){
                    info5<<cart[i][1]<<",";
                }
            }  
            else
                return;
        }


        void payment() {
            char conf;
            
            disp_cart();
                      
            //cout<<"Select payment method (1. UPI     2. Card )";      SHOULD WE IMPLEMENT THIS and HOW??


            confirmation:
            cout<<"Confirm Payment? (Y/N) : " ;
            cin>>conf;
            
            switch (conf) {

                case 'Y':
                case 'y':
                    cout<<"Payment Successful!";
                    //something
                     break;

                case 'N':
                case 'n':
                    return;
            
                default:
                    cout<<"Invalid input, retry";
                    goto confirmation;
            }    
        }


        void disp_cart(){
            int total=0;
            cout<<"*Your Order Summary*\n";

            if(cart.size()==0)
                cout<<"Your Cart is empty\n";
            else{
                cout<<"     Product ID      Quantity        Amount\n";
                // fstream info2("cart.txt");
                // while(info2,cart[])
                for (int i=0; i<cart.size(); i++){
                    cout<<(i+1)<<".        "<<cart[i][0]<<"                "<<cart[i][1]<<"          ₹ "<<cart[i][2]<<"\n";
                
                    total+=cart[i][2];

            }
            cout<<"Total Amount = "<<total<<"\n";
            
            }
        } 
};


class sell : public login {
private:
    int p, quantity, p50 = 0, p100 = 0, pLast = 0,sellid=1000;
    char grade;
    string line;


public:
    void product_info() {
        string id,grade,quant,r50,r100,r,cropname;
        int sellid=1000;
        
        
        cout << "Enter product number: ";
        cin >> p;

        cout << "Enter product grade : \n A: High grade \n B: Average grade \n C: Low grade\n";
        cin >> grade;

        cout << "Enter quantity you want to sell (in kg): ";
        cin >> quantity;
    

    
        // display price of each range from file system
        cout << "Enter your price for quantity up to 50 kg (in rupees per kg): ";
        cin >> p50;

        if (quantity > 50) {
            cout << "Enter your price for quantity 50-100 kg (in rupees per kg): ";
            cin >> p100;
        }else{p100=0;}

        if (quantity > 100) {
            cout << "Enter your price for quantity above 100 kg (in rupees per kg): ";
            cin >> pLast;
        }else{pLast=0;}

        ifstream info8("cropinfo.txt");
                while(getline(info8,id,',') && 
                      getline(info8,cropname,',') && 
                      getline(info8,grade,',') && 
                      getline(info8,quant,',') &&
                      getline(info8,r50,',') &&
                      getline(info8,r100,',') &&
                      getline(info8,r)){}
       stringstream ss(id);
       ss>>sellid;
            sellid++;

    ofstream cinfo("cropinfo.txt", ios::app);
    cinfo<<sellid<<","<<p<<","<<grade<<","<<quantity<<","<<p50<<","<<p100<<","<<pLast<<endl;
    }

};


class Crop {
private:
    string name, soil, water, temperature, season;

public:
    Crop(string n, string s, string w, string t, string se)            //Constructor
        : name(n), soil(s), water(w), temperature(t), season(se) {}

    string getName() const {                                           //Getters
        return name; 
    }
    string getSoil() const { 
        return soil; 
    }
    string getWater() const { 
        return water; 
    }
    string getTemperature() const {
        return temperature; 
    }
    string getSeason() const { 
        return season; 
    }
};

int calculateScore(const Crop& c, const string& soil, const string& water,
                   const string& temp, const string& season) {
    int score = 0;

    if (c.getSoil() == soil)   
        score += 3;
    if (c.getWater() == water)  
        score += 2;
    if (c.getTemperature() == temp) 
        score += 2;
    if (c.getSeason() == season) 
        score += 3;

    return score;
}



int main() {
    string username;

    loginpage:              //LOGIN
    login l1;
    if(!l1.run())
        return 0;       //Exit Program

    username=l1.getusername();      


    int k;
    frontpage:
    cout<<"How can we help you today? :)\n( 1. Buy     2. Sell     3. HelpDesk     0. EXIT ) : ";
    cin>>k;

    if(k==0)
        goto loginpage;

    else if(k==1){              //BUY
        buyer b1;
        restartb:
        b1.disp_list();
        if(b1.getchoice()==-1){
            goto frontpage;
        }

        b1.transaction();
        if(b1.temp1!=1 && b1.temp1!=2){
            cout<<"Incorrect Input\n";
            goto restartb;
        }


        if(b1.temp2==1||b1.temp2==3){
            goto restartb;
        }

        b1.payment();
        goto loginpage;   
    }


    else if(k==2){              //SELL
         sell s1;
         int ch;
        restarts:
            s1.product_info();
            

            cout << "1. Confirm\n2. Add more products\n0. Exit\n";
            cin >> ch;

        if (ch == 0) {
            cout << "Your changes will not be saved.\n";
            cout << "Press 0 to continue.\n";
            goto frontpage;
        }

        else{
             // add data to file system
            if (ch == 1) {
                cout << "Your changes are saved.\n";
                goto frontpage;
            }
            else if(ch == 2)
                goto restarts;


        }
        
    }


    else if(k==3){              //HELPDESK

        vector<Crop> crops;
        crops.push_back(Crop("Rice", "high", "high", "high", "monsoon"));               
        crops.push_back(Crop("Wheat", "high", "moderate", "moderate", "winter"));
        crops.push_back(Crop("Maize", "moderate", "moderate", "moderate", "summer"));
        crops.push_back(Crop("Millets", "low", "low", "high", "summer"));
        crops.push_back(Crop("Sugarcane", "high", "high", "high", "monsoon"));

    
        cout<<"Share your farm details and we'll help you get MAXIMUM YEILD!!\n";

        string soil, water, temp, season;

        cout << "Enter soil fertility: ";  
        cin >> soil;
        cout << "Enter water supply: ";    
        cin >> water;
        cout << "Enter temperature: ";     
        cin >> temp;
        cout << "Enter season: ";          
        cin >> season;

        cout << "\nRecommended Crops:\n";

        for (const Crop& c : crops) {
            int score = calculateScore(c, soil, water, temp, season);
           if (score >= 6)
               cout << c.getName() << " (Score: " << score << ")\n\n\n";
        }   

        goto frontpage;
    }   


    return 0;
}
