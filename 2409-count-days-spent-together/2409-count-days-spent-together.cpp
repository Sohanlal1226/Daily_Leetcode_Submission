class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aam = stoi(arriveAlice.substr(0,2));
        int aad = stoi(arriveAlice.substr(3,2));
        int lam = stoi(leaveAlice.substr(0,2));
        int lad = stoi(leaveAlice.substr(3,2));
        int abm = stoi(arriveBob.substr(0,2));
        int abd = stoi(arriveBob.substr(3,2));
        int lbm = stoi(leaveBob.substr(0,2));
        int lbd = stoi(leaveBob.substr(3,2));

        unordered_map<int , int> month = {{1,31} , {2,28} , {3,31} , {4,30} , {5,31} , 
        {6,30} , {7,31} , {8,31} , {9,30} , {10,31} , {11,30} , {12,31}};

        int arrive_month = max(aam,abm);
        int arrive_day;
        if(aam > abm){
            arrive_day = aad;
        }else if(aam < abm){
            arrive_day = abd;
        }else{
            arrive_day = max(aad , abd);
        }

        int leave_month = min(lam, lbm);
        int leave_day;

        if(lam > lbm){
            leave_day = lbd;
        }else if(lam < lbm){
            leave_day = lad;
        }else{
            leave_day = min(lad, lbd);
        }

        if(arrive_month > leave_month){
            return 0;
        }
        if(arrive_month == leave_month){
            return max(0 , leave_day - arrive_day + 1);
        }

        int days = 0;
        int temp = arrive_month;
        while(temp < leave_month){
            if(temp == arrive_month){
                days += (month[arrive_month] - arrive_day + 1);
            }else{
                days += month[temp];
            }
            temp++;
        }

        days += leave_day;

        return days; 
    }
};