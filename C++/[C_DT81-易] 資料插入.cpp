#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sequence[n+1]= {0};
  for(int i=0; i<=n; i++)
  {
    cin >> sequence[i]; //�N�Ҧ���Jsequence�o�Ӱ}�C��
  }

  sort(sequence,sequence+(n+1));//sort(�}�C�W,�}�C�W + (�q�e��ƨӶ��ƦC���ƶq) ) �A �`�N�Pvector��sort�ϥΤ�k���P

  for(int i=0; i<=n; i++)
  {
    cout << sequence[i] << endl;
  }
  return 0;
}
