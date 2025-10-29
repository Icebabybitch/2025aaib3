// week08-4.cpp LeetCOde 學習計畫 Simulation 第4題
// 1041. Robot Bounded In Circle 機器人有在"繞圈圈"嗎?
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0; // 0:北，1:東，2:南，3:西
        int x = 0, y = 0; // 一開始在(0,0)
        instructions =  instructions + instructions + instructions + instructions;//重複走4次，回到原點
        for (char c : instructions){
            if (c=='G'){ // 往前走
                if(d==0) y++; // 往北走1格
                if(d==1) x++; // 往北走1格
                if(d==2) y--; // 往北走1格
                if(d==3) x--; // 往北走1格
            } else if (c=='R'){ // 往右轉 (順時針90度)
                d = (d+1) % 4;
            } else if (c=='L'){ // 往左轉 (逆時針90度)
                d = (d+3) % 4;
            }
        }
        return x==0 && y==0; // 結束時，機器人在哪裡? 什麼叫"繞圈圈"?重複走4次，回到原點
    }
};
