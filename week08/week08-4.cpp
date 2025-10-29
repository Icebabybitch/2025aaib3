// week08-4.cpp LeetCOde �ǲ߭p�e Simulation ��4�D
// 1041. Robot Bounded In Circle �����H���b"¶���"��?
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0; // 0:�_�A1:�F�A2:�n�A3:��
        int x = 0, y = 0; // �@�}�l�b(0,0)
        instructions =  instructions + instructions + instructions + instructions;//���ƨ�4���A�^����I
        for (char c : instructions){
            if (c=='G'){ // ���e��
                if(d==0) y++; // ���_��1��
                if(d==1) x++; // ���_��1��
                if(d==2) y--; // ���_��1��
                if(d==3) x--; // ���_��1��
            } else if (c=='R'){ // ���k�� (���ɰw90��)
                d = (d+1) % 4;
            } else if (c=='L'){ // ������ (�f�ɰw90��)
                d = (d+3) % 4;
            }
        }
        return x==0 && y==0; // �����ɡA�����H�b����? ����s"¶���"?���ƨ�4���A�^����I
    }
};
