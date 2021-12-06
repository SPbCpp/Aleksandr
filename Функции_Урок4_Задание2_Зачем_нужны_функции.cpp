//���� 4. ����� ����� �������

//������� 2
// 
//�������� �������, �������
//���������� PalindromeFilter,
//���������� vector<string>,
//��������� vector<string> words � int min_length,
//���������� �� ������� words ��� ������ - ���������� ������
//�� ������ min_length.
//������� PalindromeFilter ������ ������������ ���������������
//������� IsPalindrome, ������� ����������, ����� �� ���������� �� ������ �����������.
//������� ������� � �������� ������
// 
//      WORDS	              MINLENGTH	          ���������
// 
//    rotor, anna, kayak	      5               rotor, kayak
//    rotor, anna	              2	              rotor, anna
//    racecar, bro, code	      4	              racecar
// 
//��� ����� ������������� ��� ���
//������� �������� ������ ������� IsPalindrome � PalindromeFilter, �������
//�� � ���������� �������� ������� � ��������� ��������� ����
//������� � ���������� ����������.������� main ����� �������� �� ������ �� ��������.

#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*  ��������� ������� ��� ����������� ����������
 * ��������� ������ s
 * ���������� true ���� ������ s ��������� ��� false ���� ������ s �� ��������� */
bool IsPalindrome(string s) {
    /* �������� ���� �� 0 �� �������� ������� ������ � ����������� ���� */
    for (int i = 0; i < s.size() / 2; ++i) {
        /* ������� �� ���������� �����:
         * i-�� ������� ����� �� �����  i-��� �������� ������. */
        if (s[i] != s[s.size() - i - 1]) {
            /* ��� �� ���������.
             * ���������� false */
            return false;
        }
    }
    /* ���� ������ ����� �� �� ������� false ������ ��� ���������.
     * ���������� true */
    return true;
}

/*  ��������� �������
 * ��������� ������ ���� words � ����������� ����� �����
 * ���������� ������ ����������� ������ �� ������ min_length */
vector<string> PalindromeFilter(vector<string> words, int min_length) {
    /*  ��������� ������ ����� ��� �������� ����������� ������ �� ������ min_length  */
    vector<string> result;
    /*  �������� �� ���� ������ �� ������� words */
    for (string s : words) {
        /* ������� �� ���������� �����:
        * ����� ����� �� ������ min_length � ����� �������� ����������� */
        if (s.size() >= min_length && IsPalindrome(s)) {
            /* FOR SUPPORT: ��������� ����� � ����� ������� ����������� */
            result.push_back(s);
        }
    }
    /* ���������� ������ ����������� */
    return result;
}

int main()
{

}