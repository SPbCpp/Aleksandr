//�������� ����������� ������
//
//���� 5. �������� �����������
//
//�������
//
//������������������� � ������� ������� SplitIntoWords, ������� ���������
//������ �� ����������� ������.��������� � �� ����� test search query � ��������
//���������� ����� � ���������� �������.


#include <iostream>
#include <string>
#include <vector>

using namespace std;


vector<string> SplitIntoWords(const string& text) {
    vector<string> words;
    string word;
    for (const char c : text) {
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

int main()
{
    string query = "test search query";// ��� ���

    for (string word: SplitIntoWords(query))
    {
        cout <<'['<< word << ']'<<' ';
    }

    return 0;
}