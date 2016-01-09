//
//  main.cpp
//  Classes
//
//  Created by Apple on 1/9/16.
//  Copyright © 2016 Connor. All rights reserved.
//

#include <iostream>

#include "monkey.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    // connor
    string n;
    string g;
    int h;
    int w;
    
    
    
    cout << "What is you Monkey's name?" << endl;
    cin >> n;
    
    cout << "What gender is your monkey?" << endl;
    cin >> g;
    
    cout << "How tall is your monkey?" << endl;
    cin >> h;
    
    cout << "What is your monkey's weight?" << endl;
    cin >> w;
    
    monkey connor(n,g,h,w);
    
    
    

    
    while (connor.getlife()) {
        cout << "How many bananas do you wnat to give to your monkey?" << endl;
        int x;
        cin >> x;
        if (x == 1234) {
            break;
        }
        connor.feedmonkey(x);
        cout << "Now your monkey weighs " << connor.getweight() << endl;
    
        connor.loseweight();
    
        connor.health();
        if (connor.health() == 1) {
            cout << "Your Monkey died of starvation" << endl;
        }
        else if (connor.health() == 2){
            cout << "Your Monkey died because he ate too much" << endl;
        }
        
    }
    return 0;
}
