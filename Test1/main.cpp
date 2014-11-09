//
//  main.cpp
//  Test1
//
//  Created by Wangl on 14-6-25.
//  Copyright (c) 2014年 Wangl. All rights reserved.
//

///欧洲风格的耗油量转换为美国风格
#include <iostream>

using namespace std;

float theEuropeTranslateUS(float theEuropeOil);

int main(int argc, const char * argv[]) {
    // insert code here...
    
//    float europe;
//    float theUS;
//    cout<<"Please input Europe Style  (L/100km):"<<endl;
//    cin>>europe;
//    theUS = theEuropeTranslateUS(europe);
//    cout<<theUS<<endl;
    
    
    //    string name;
//    char nameArray [10];
//    cout<<"Please input your name"<<endl;
//    //getline(cin, name);
//    cin.getline(nameArray, 10);
//    //cin.get();
//    cout<<"You name is :"<<endl;
//    cout<<nameArray<<endl;
//    return 0;
}

float theEuropeTranslateUS(float theEuropeOil)
{
    float theEpDistances = 100.0;
    float theUSDistances = theEpDistances * 0.6214;
    float theUSOil = theEuropeOil / 3.875;
    
    return theUSDistances/theUSOil;
}
