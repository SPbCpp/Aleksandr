//�������� ����������� ������
//
//���� 5. �������� �����������
//
//�������
//
//������������������� � ������� ������� SplitIntoWords, ������� ���������
//������ �� ����������� ������.��������� � �� ����� test search query � ��������
//���������� ����� � ���������� �������.
//
//�������� �� �� ����� �� � ���������� �������� ��������, � � �����������
//������ ������� ReadSearchQuery. �������� � � ���� ���:
// 
//string ReadSearchQuery() {
//    string query;
//    getline(cin, query);
//    return query;
//}


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

string ReadSearchQuery() {
        string query;
        getline(cin, query);
        return query;
    }

int main()
{
    string query = ReadSearchQuery();// ��� ���

    for (string word: SplitIntoWords(query))
    {
        cout <<'['<< word << ']'<<' ';
    }

    return 0;
}