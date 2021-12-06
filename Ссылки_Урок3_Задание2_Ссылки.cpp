//������
//
//����3. ������
//
//������� 2
// 
//�������� ������� MoveStrings.��� ��������� ������� ����� source � destination
//� ���������� ��� ������ �� ������� ������� � ����� �������.
//����� ���������� ������� ������ source ������ ����� ������.
//����� �������� ���������� �������, �������� � ���� ����� clear :
//string query = "how to learn c++"s;
//vector<string> query_words = SplitIntoWords(query);
//query_words.clear();
//������ ������ query_words ����. ����� empty ����� true, ����� size � 0. 
//������ ������������� ������� MoveStrings :
//vector<string> source = { "how"s, "to"s, "learn"s };
//vector<string> destination = { "c++"s };
//MoveStrings(source, destination);
// source ������ ��������� ������
// destination ������ ��������� ������ "c++", "how", "to", "learn" ������ � ����� ������� 

#include <vector>
#include <string>

using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
    for (string& s : source) {
        destination.push_back(s);
    }
    source.clear();
}