#include<bits/stdc++.h>
using namespace std;
bool CrosstheChakravyuh(int i, float power,float &initialPower,int skiptime, int recharge, vector<float>&circle){
    //if we reach at pandavas army then return true
    if(i == circle.size()) return true;
    bool skip = false,take = false;
    /* if the power of abhimanyu is less than the current circle enemy power, then see for the skiptime and recharge
      time , first check can abhimanyu skip the current circle or not, as well as check abhimanyu can recharge or not his power.
    */
    if(power < circle[i]){
        if(skiptime){
         skip = CrosstheChakravyuh(i+1,power,initialPower,skiptime-1,recharge,circle);
        }
        if(recharge && initialPower >= circle[i]){
           take = CrosstheChakravyuh(i+1,initialPower-circle[i],initialPower,skiptime,recharge-1,circle);
        }
    }
    /* if abhimanyu's power is greater than the current circle enemy power . Then also check if abhimanyu can skip the current circle
    for dont loss his power, if yes then skip, otherwise kill the enemy
    */
    else{
      if(skiptime){
        skip = CrosstheChakravyuh(i+1,power,initialPower,skiptime-1,recharge,circle);
      }
      take = CrosstheChakravyuh(i+1,power-circle[i],initialPower,skiptime,recharge,circle);
    } 
    //if for any possibility abhimanyu can reach at pandavas army then return true
    return skip or take;
}
int main(){
    //To compare with the half of k3 and k7 power variable will be float
    float power;
    int skiptime,recharge;
    vector<float>cicrle(11);
    cout<<"Enter the power of Abhmanyu";
    cin>>power;
    cout<<"Enter the skiptime";
    cin>>skiptime;
    cout<<"Enter the number of time Abhmanyu can recharge himself";
    cin>>recharge;
    cout<<"Enter the 11 circle";
    for(int i = 0;i<11;i++){
        cin>>cicrle[i];
    }
    /*if we face k3 and k7 then again we have to face with half of k3 and k7,so total 1.5k3 and 1.5k7 we have to face. thats why 
      dirctly getting the value of k3 and k7 with 1.5 multiply
    */
    cicrle[2] = cicrle[2]+(cicrle[2]/2);
    cicrle[6] = cicrle[6]+(cicrle[6]/2);
    bool ans = CrosstheChakravyuh(0,power,power,skiptime,recharge,cicrle);
    if(ans){
        cout<<"Yes, Abhimanyu can cross Chakravyuh";
    }
    else cout<<"Not possible";
}

/*
First test case:-
Input:--
Abhimanyu power = 4
Skiptime = 9
Rechage time = 0
circle = 4 5 6 7 8 9 10 11 12 3 1
Output:- Yes, Abhimanyu can cross Chakravyuh
Explanation:- 
Abhimunya will skip first 9 cicle enemy, and then kill 10 and 11 circle enemy
here , abhimanyu can kill the first circle enemy also, first then abhimanyu need to skip 2 to 10 for that case abhimanyu cant reach at
chakravyuh, because the power = 0, and recharge = 0,
---------------------------------------------------X--------------------------------------------------
second test case:- 
Abhimanyu power = 3
Skiptime = 3
Rechage time = 2
circle = 2 1 2 1 1 1 2 12 13 12 4
Outpur:-Not, possible
Explanation:-
Abhimanyu can't reach at chakravyu. Because, he need to skip 8,9,10 circle so no remain skip time.Now, he can kill 1,2,3,4,5,6 circle
after that, he has power = 0,rechargetime = 0,skip = 0.So, abhimanyu will lose the battle.
*/