#include <webdriverxx.h>
#include <iostream>
#include <vector>
using namespace std;
using namespace webdriverxx;

int main()
{

	WebDriver firefox = Start(Firefox());
	
	vector<Element> menu = firefox
		.Navigate("http://dblp.uni-trier.de/pers/hd/l/Lee:Yonggu")
		.FindElements(ByClass("title"));

	for (Element i : menu)
	{
		cout << i.GetText() << endl;
	}
	return 0;
}