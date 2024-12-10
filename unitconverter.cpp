#include <bits/stdc++.h>
using namespace std;
int main() {
  char category;
  int tempChoice;
  int distanceChoice;
  int massChoice;
  int volumechoice;
  int areachoice;
  int heightchoice;
  int currencychoice;
  int speedchoice;
  int timechoice;
  int energychoice;
  int pressurechoice;


  float userinputF;
  float userinputC;

  float userinputKm;
  float userinputMile;

  float userinputKg;
  float userinputGram;

  float userinputliter;
  float userinputgallon;

  float userinputsqm;

  float userinputfeet;

  float userinputtaka;

  float userinputmps;
  float userinputkmh;

  float userinputsec;
  float userinputmin;

  float userinputjoule;
  float userinputcalorie;

  float userinputpascal;
  float userinputbar;

  float FahrenheitToCelcius;
  float CelciusToKelvin;

  float KmToMile;
  float MileToKm;

  float KgToPound;
  float GramToOunce;

  float litertogallon;
  float gallontoliter;

  float sqmtosqf;
  float sqmtoacre;

  float feettometer;
  float feettoinch;

  float takatorupee;
  float takatousd;

  float mpstokmh;
  float kmhtomps;

  float sectomin;
  float mintohr;

  float jouletocalorie;
  float calorietojoule;

  float pascaltobar;
  float bartopascal;



  cout<<"Welcome to Unit Converter! \n";
  cout<<"Here is a list of conversation to choose from: \n";
  cout<<"Temperature(T),Distance(D),Mass(M),Volume(V),Area(A),Height(H),Currency(C),Speed(S),Time(T),Energy(E) \n";
  cout<<"Please enter the letter you want to convert.\n";
  cin>>category;

  if(category == 'T'){
      cout<<"Welcome to Temperature Converter! \n";
      cout<<"Here is a list of conversations to choose from: \n";
      cout<<"Enter 1 for Fahrenheit to Celsius. \n";
      cout<<"Enter 2 for Celsius to kelvin \n";
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          cout<<"Please enter the Fahrenheit degree: \n";
          cin>>userinputF;
          FahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          cout<<FahrenheitToCelcius;
      }
      else if(tempChoice == 2){
        cout<<"Please enter the Celcius degree: \n";
        cin>>userinputC;
        CelciusToKelvin = userinputC+273;
        cout<<CelciusToKelvin;
      }
      else
        printf("Please enter the correct choice. \n");
  }
  if(category == 'D'){
      cout<<"Welcome to Distance Converter! \n";
      cout<<"Here is a list of conversations to choose from: \n";
      cout<<"Enter 1 for km to mile. \n";
      cout<<"Enter 2 for mile to km. \n";
      cin>>distanceChoice;
      if(distanceChoice == 1){
          cout<<"Please enter the km: \n";
          cin>>userinputKm;
          KmToMile =  (userinputKm*0.621);
          cout<<KmToMile;
      }
      else if( heightchoice== 2){
        cout<<"Please enter the mile: \n";
        cin>>userinputMile;
        MileToKm = userinputMile*1.609;
        cout<<MileToKm;
      }
      else
        printf("Please enter the correct choice. \n");
  }
   else if(category == 'M'){
      cout<<"Welcome to mass Converter! \n";
      cout<<"Here is a list of conversations to choose from: \n";
      cout<<"Enter 1 for kg to pound. \n";
      cout<<"Enter 2 for gram to ounce. \n";
      cin>>massChoice;
      if( massChoice== 1){
          cout<<"Please enter the kg: \n";
          cin>>userinputKg;
          KgToPound =  (userinputKg*2.20);
          cout<<KgToPound;
      }
      else if( massChoice== 2){
        cout<<"Please enter the gram: \n";
        cin>>userinputGram;
         GramToOunce= userinputGram*0.035;
        cout<<GramToOunce;
      }
      else
        printf("Please enter the correct choice. \n");
  }
   if(category == 'V'){
      cout<<"Welcome to Volume Converter! \n";
      cout<<"Here is a list of conversations to choose from: \n";
      cout<<"Enter 1 for liter to gallon. \n";
      cout<<"Enter 2 for gallon to liter \n";
      cin>>volumechoice;
      if(volumechoice == 1){
          cout<<"Please enter the liter: \n";
          cin>>userinputliter;
          litertogallon =  (userinputliter*0.264);
          cout<<litertogallon;
      }
      else if(volumechoice == 2){
        cout<<"Please enter the gallon: \n";
        cin>>userinputgallon;
        gallontoliter= userinputgallon*3.785;
        cout<<gallontoliter;
      }
      else
        printf("Please enter the correct choice. \n");
  }
  if(category == 'A'){
      cout<<"Welcome to area Converter! \n";
      cout<<"Here is a list of conversations to choose from: \n";
      cout<<"Enter 1 for squaremeter to squarefeet. \n";
      cout<<"Enter 2 for squaremeter to acre. \n";
      cin>>areachoice;
      if(areachoice == 1){
          cout<<"Please enter the squaremeter: \n";
          cin>>userinputsqm;
          sqmtosqf =  (userinputsqm*10.764);
          cout<<sqmtosqf;
      }
      else if(areachoice == 2){
        cout<<"Please enter the squaremeter: \n";
        cin>>userinputsqm;
        sqmtoacre = userinputsqm*0.0002471;
        cout<<sqmtoacre;
      }
      else
        printf("Please enter the correct choice. \n");
  }
  if(category == 'H'){
      cout<<"Welcome to height Converter! \n";
      cout<<"Here is a list of conversations to choose from: \n";
      cout<<"Enter 1 for feet to meter. \n";
      cout<<"Enter 2 for feet to inch. \n";
      cin>>heightchoice;
      if(heightchoice == 1){
          cout<<"Please enter the feet: \n";
          cin>>userinputfeet;
          feettometer =  (userinputfeet*0.305);
          cout<<feettometer;
      }
      else if( heightchoice== 2){
        cout<<"Please enter the feet: \n";
        cin>>userinputfeet;
        feettoinch = userinputfeet*12;
        cout<<feettoinch;
      }
      else
        printf("Please enter the correct choice. \n");
  }
else if(category == 'C'){
      cout<<"Welcome to currency Converter! \n";
      cout<<"Here is a list of conversations to choose from: \n";
      cout<<"Enter 1 for taka to rupee. \n";
      cout<<"Enter 2 for taka to usd. \n";
      cin>>currencychoice;
      if(currencychoice == 1){
          cout<<"Please enter the taka: \n";
          cin>>userinputtaka;
          takatorupee =  (userinputtaka*0.711);
          cout<<takatorupee;
      }
      else if( currencychoice== 2){
        cout<<"Please enter the taka: \n";
        cin>>userinputtaka;
        takatousd = userinputtaka*0.0084;
        cout<<takatousd ;
      }
      else
        printf("Please enter the correct choice. \n");
  }
  if(category == 'S'){
      cout<<"Welcome to speed Converter! \n";
      cout<<"Here is a list of conversations to choose from: \n";
      cout<<"Enter 1 for mps to kmh. \n";
      cout<<"Enter 2 for kmh to mps. \n";
      cin>>speedchoice;
      if(speedchoice == 1){
          cout<<"Please enter the mps: \n";
          cin>>userinputmps;
          mpstokmh =  (userinputmps*3.6);
          cout<<mpstokmh;
      }
      else if(speedchoice == 2){
        cout<<"Please enter the kmh: \n";
        cin>>userinputkmh;
        kmhtomps = userinputkmh*0.278;
        cout<<kmhtomps;
      }
      else
        printf("Please enter the correct choice. \n");
  }
if(category == 'T'){
      cout<<"Welcome to time Converter! \n";
      cout<<"Here is a list of conversations to choose from: \n";
      cout<<"Enter 1 for sec to min. \n";
      cout<<"Enter 2 for min to hr. \n";
      cin>>timechoice;
      if(timechoice == 1){
          cout<<"Please enter the sec: \n";
          cin>>userinputsec;
          sectomin =  (userinputsec*0.0167);
          cout<<sectomin;
      }
      else if(timechoice == 2){
        cout<<"Please enter the min: \n";
        cin>>userinputmin;
        mintohr = userinputmin*0.0167;
        cout<<mintohr;
      }
      else
        printf("Please enter the correct choice. \n");
}

        if(category == 'E'){
      cout<<"Welcome to energy Converter! \n";
      cout<<"Here is a list of conversations to choose from: \n";
      cout<<"Enter 1 for joule to calorie. \n";
      cout<<"Enter 2 for calorie to joule. \n";
      cin>>energychoice;
      if(energychoice == 1){
          cout<<"Please enter the joule: \n";
          cin>>userinputjoule;
          jouletocalorie =  (userinputjoule*0.24);
          cout<<jouletocalorie;
      }
      else if(energychoice == 2){
        cout<<"Please enter the calorie: \n";
        cin>>userinputcalorie;
        calorietojoule = userinputcalorie*4.2;
        cout<<calorietojoule;
      }
      else
        printf("Please enter the correct choice. \n");

  }
  return 0;
}

