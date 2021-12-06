//Map
//
//���� 3. ��������� ����� map
//
//�������
//
//����� ���������� �����������, ���� ���� �� ��� ����� �������� ������������� ���� � ������.��������, �eat� � �tea� � ���������, ������ ��� ������� �� ����� � ��� �� ���� � ������ �������.
//� ��� ���� ���� ����.���������, ����� �� ������� ����� � ������ ���� �����������.��������� map � ��� ���� ���� ����������, ������� ��� � ��� ����������� ������ �����.���� ��� ����� ���� ���� ��� ������� �����, ������, ����� � ���������.� ��������� ������ � ���.��������� �������� ��������� ������� ���������� == .
//������ �����
//������� ���� ����� ��� ���� N, ����� � N - ������� ���������� ���� ����, ������� ���������� ���������.�������������, ��� ��� ����� ������� �� �������� ��������� ����.
//������ ������
//�������� N ����� : ��� ������ �������� ���� ���� ����������� YES, ���� ��� ����� � ���������, � NO � ��������� ������.
//
//�������
// 
//                 ����	                            �����
// 
//      3 hare rhea pig squid wolf fowl	          YES NO YES


#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> BuildCharCounters(const string& word) {
    map<char, int> counters;
    for (char c : word) {
        ++counters[c];
    }
    return counters;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string first_word, second_word;
        cin >> first_word >> second_word;
        if (BuildCharCounters(first_word) == BuildCharCounters(second_word)) {
            cout << "YES"s << endl;
        }
        else {
            cout << "NO"s << endl;
        }
    }

    return 0;
}