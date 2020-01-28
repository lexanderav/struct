#include <iostream>
#include <string>
using namespace std;

struct airport
{
private:
	int numm;
	string time;
	string dest;
public:
	void SetNumm(int x)
	{
		numm = x;
	}
	void SetTime(string y)
	{
		time = y;
	}
	void SetDest(string y)
	{
		dest = y;
	}
	int GetNumm()
	{
		return numm;
	}
	string GetTime()
	{
		return time;
	}
	string GetDest()
	{
		return dest;
	}
};

int main()
{
	int x = 0;
	int count = 0,count1  = 0;
	string y,z, ch_time;
	airport flight[2];
	setlocale(LC_ALL,"Rus");
	for (int i = 0; i < 2; i++)
	{
		cout << "Ââåäèòå íîìåð ðåéñà : ";
		cin >> x;
		flight[i].SetNumm(x);
		cout << "Ââåäèòå âðåìÿ ðåéñà (÷÷:ìì) : " ;
		cin.ignore();
		getline(cin, z);
		flight[i].SetTime(z);
		cout << "Ââåäèòå ïóíêò íàçíà÷åíèÿ ðåéñà : ";
		getline(cin, y);
		flight[i].SetDest(y);
	}
	cout << endl << endl << "Ââåäèòå èíòåðåñóåùåå âàñ âðåìÿ (÷÷:ìì) : ";
	getline(cin,ch_time);
	for (int i = 0; i < 2; i++)
	{
		if (ch_time == flight[i].GetTime())
		{
			cout << "ÍÎÌÅÐ ÐÅÉÑÀ - " << flight[i].GetNumm() << " ÂÐÅÌß (÷÷:ìì) - " << flight[i].GetTime() << " ÏÓÍÊÒ ÍÀÇÍÀ×ÅÍÈß - " << flight[i].GetDest();
			count1 = 1;
		}
		else
		{
			count = 0;
		}
	}
	if ((count == 0) && (count1 == 0))
	{
		cout << " Â ÄÀÍÍÎÅ ÂÅÐÌß ÍÅÒ ÐÅÉÑÎÂ ";
	}
	return 0;
}