// week07-3.cpp LeetCode �ǲ߭p�e Simulation ��1�D
// 682.Baseball Game �p���I��
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // Part04: �n����, ���}�C a �̭�
        for (string op : operations) { // Part01: C++ �i���j��
            cout << "�{�bŪ��F: " << op << "\n"; // Part 2: �ݥL�O��, ���@�U�R����
            // Part03: �@�� if �P�_�n���ҽk
            if (op[0]=='C'){ //�M���̫�@��
                a.pop_back(); // �ᱼ�̫�@�� // Part06: pop_back()
            } else if (op[0]=='D'){ // �̫�1��"��2��"�A"�[��̫᭱"
                a.push_back( a.back() * 2 ); // ��2�� Part06: back()
            } else if (op[0]=='+'){ // �٤����D, ���@�U�A��
                int temp = a.back(); // ���۳̫�@�x�������P
                a.pop_back(); // ��̫�@�x���}��
                int temp2 = a.back(); // �i�H�ۭ˼Ʋ�2�x�������P
                a.push_back(temp); // ���誺�����^��
                a.push_back( temp+temp2 ); // ��̫�2�ӥ[�_��, �A"�[��̫᭱"
            } else { // �Ʀr���r���o, �n"�[��̫᭱"
                a.push_back( stoi(op) ); // Part04: .push_back()
            }
        }
        int ans = 0;
        for (int now : a){ // Part05: C++ �i���j�� �n�ݰ}�C�̪���
           ans += now; // cout << now << " "; // Part02: �ݥL�O��, ���@�U�R����(�ݰ}�C�̪���)
        }
        //���H�K return ���@�U�A�g"�u������"
        return ans; // return 0; // ���H�K return ���@�U�A�g"�u������"
    }
};
