// week08-3b.cpp LeetCode �ǲ߭p�e Simulation
// 1275. Find Winner on a Tic Tac Toe Game
// �ݰ_�� 3x3 �}�C�A�ҥH�} int[3][3] = {} �}�C �A�� myPrint() �L�X��
class Solution {
public:
    // myPrint() �p���⪺�{���R���o
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // ���j�A���A�|��0
        int now = 1, winner = 0; // 1:���aA ��1�Ӫ��a 2:���aB ��2�Ӫ��a
        for (vector<int> move : moves){
            int i = move[0], j = move[1];
            a[i][j] = now; //a[i][j] = 1; // ���aA ��1�Ӫ��a
            // myPrint(a); // ��}�C�L�X�ӳ�!! �ڭ̪��p����
            if (a[i][0]==now && a[i][1]==now && a[i][2]==now) winner = now; // ���@����u �P�_�ֱo��!!
            if (a[0][j]==now && a[1][j]==now && a[2][j]==now) winner = now; // ���@�����u
            if (a[0][0]==now && a[1][1]==now && a[2][2]==now) winner = now; // �׽u ���W.�k�U
            if (a[0][2]==now && a[1][1]==now && a[2][0]==now) winner = now; // �׽u �k�W.���U
            if (now==1) now = 2;// A�U����A �N��B�U
            else now = 1; // B�U����A �N��A�U
        }
        if (winner==1) return "A"; // �� winner �O 1
        else if (winner==2) return "B"; // �� winner �O 2
        else if (moves.size()==9) return "Draw"; // �� winner �O 2
        else return "Pending"; // �����A�٨S�U���A�n�� Pending
    }
};
