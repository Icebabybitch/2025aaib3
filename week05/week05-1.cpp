// week05-1.cpp
// LeetCode �ǲ߭p�e Built-In Function 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // ��r�� string �� iostream �� cin�ӥ�
        string word; // �r��
        ss >> word; // ���O cin >> word �@�ˡA�{�b�� ss �i�H�� ss >> word
        // ss >> word; // Ū��2���A�|Ū���2�Ӧr
        while ( ss >> word ) { // �@��Ū�AŪ�줣��Ū����
        // �̭�����Ƴ��S����
        }
        cout << word; // �����@�ӹ���A��Ū���

        return word.length(); // �̫�A����װe�X�h
    }
};
