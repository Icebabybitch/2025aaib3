/// week05-3c.cpp �T�X�@�� Part1/Part2 Input/Output
/// Part3: stringstream �_�r
/// CPE �o������2�D UVA 483 Word Scramble ��r�ˤ�
#include <iostream>
#include <sstream> /// Part3: ��r��Ψ��_�r
#include <string>
#include <algorithm> /// Part4: �ϹL�ӡA�n�Ψ�algorithm
using namespace std;
int main()
{
    string line; /// Part 1: Input
    while ( getline(cin, line)){
    /// Ū�J1��@��Ū�AŪ��Ctrl-Z�~����
        stringstream ss(line); /// Part 3: ��r��Ψ��_�r
        string word; /// �Ψ��_�r�o
        ss >> word; /// Part 5: �ѨM�Ů���D�A�����Y"���ΪŮ�"
        reverse( word.begin(), word.end() );
        cout << word; /// Part 5: �ѨM�Ů���D�A�����Y"���ΪŮ�"
        while ( ss >> word ) { /// Part 3: ��r��Ψ��_�r
            reverse ( word.begin(), word.end() ); /// Part 4: �ϹL��
            cout << " " << word;
        }
        cout << endl; /// ���� Part 2: Output
        ///cout << line << endl; /// ���H�K�L�X��
    }
}
