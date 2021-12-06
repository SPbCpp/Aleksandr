//Map
//
//���� 4. ������� � �������������
//
//�������
//
//�� ������� �������� �� ����� ������� ����� � ������������.
//������������ ��������, ��������� � ������������� � ��������
//����������, �� ��� ��� ��������� � ������ � �������� ������.
//����� �� �������� ����, �� ������� ������������, � ������
//���������� �� ����� ������ ������������������. ��� ��������������
//������ �� ������ ���������, ����� ���������� ����� ������.
//������ ��� ������, � ������ ���������� ��������� ������ �����,
//����������� �� ���. ������ ����� ���������������� ������ ����
//���, �� ����� ����� ���� ������ ����. ����������� ��� ������ �
//�������� �� ����� ���������� ���� ������� ���� � ���������� �������.
// 
//������ �������������
// 
//int main() 
// {
//     vector<string> bird_types = { "zyablik"s, "vorobey"s, "zyablik"s, "sinica"s, "sinica"s };
//     PrintBirdNumByType(bird_types);
// }
// 
//     ������ ������
// 
//       sinica 2
//      vorobey 1
//      zyablik 2

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;


void PrintBirdNumByType(const vector<string>& types)
{
    map<string, size_t> map;
    for (const auto& type : types)
    {
        ++map[type];
    }
    for (const auto& pair : map)
    {
        cout << pair.first << ' ' << pair.second << '\n';// �������� ����� ���� �������
    }
}

int main() {
    vector<string> bird_types = { "zyablik"s, "vorobey"s, "zyablik"s, "sinica"s, "sinica"s };
    PrintBirdNumByType(bird_types);
}