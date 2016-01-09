//
//  monkey.h
//  Classes
//
//  Created by Apple on 1/9/16.
//  Copyright © 2016 Connor. All rights reserved.
//

#ifndef monkey_h
#define monkey_h

using namespace std;


class monkey
{
private:
    string name;
    
    int age = 1;
    
    string gender ;
    
    int height;
    
    int weight;
    
    int startingweight;
    
    bool alive = true;
    

public:
    
    monkey(string n, string g, int h, int w){
        name = n;
        gender = g;
        height = h;
        weight = w;
        startingweight = w;
        
    }
    
    string getgender(){
        return gender;
    }
    
    int getheight(){
        return height;
    }
    int getweight(){
        return weight;
    }
    
    string getname(){
        return name;
    }
    
    int getage(){
        return age;
    }
    
    bool getlife(){
        return alive;
    }

    void feedmonkey(int x){
        weight += x;
    }

    void loseweight(){
        weight -= 2;
    }
    
    int health(){
        if (weight < startingweight - 10){
            alive = false;
            return 1;
        }
        else if (weight > startingweight + 50){
            alive = false;
            return 2;
        }
            return 0;
    
    }
    
};

#endif /* monkey_h */
