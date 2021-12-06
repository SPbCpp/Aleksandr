//�������

//� ������� ���� �� ����������������� ��������� ������ �� ����� : ������� � ��������� ������
//����� words.������ �������� ��������� � ���������
//������� vector<string> SplitIntoWords(string text), ������� ��������� �� ����
//������ � ���������� ������ ����.
//������ ����� - ������
//� ���� ������ ����������� ������ ����� � ������ �������������� �� �����.
//������� ������ ���� ������� vector<string> SplitIntoWords(string text).� ��������
//��������� ����� ������������ ������ �� ����.��������, ����� :
//string str = "find me a cat"s;
//������, ������������ �� �������, ��������� � ��������� ��������.� ����
// ������� ��������� ������ �����:
//vector<string> expected_result = { "find"s, "me"s, "a"s, "cat"s };
//��� ����� ������������� ��� ���
//������� ����������� ������� ������������ �� ������� ������ � ���������.
//�� ����� ������ �������� �� �����.


#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> SplitIntoWords(string text) {
    vector<string> words;
    string word;
    for (char c : text) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        }
        else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}