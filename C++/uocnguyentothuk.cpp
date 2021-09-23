#include<iostream>

using namespace std;

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int dem = 0;
        
        for (int i = 2; n > 1 ; i++)
        {
            while (n % i == 0)
            {
                dem += 1;
                n /= i;
                if (dem == k){
                	cout << i ;
                	break;
				}
            }
            if (dem == k) break;
        }
        if (dem < k) cout << -1;
        cout << endl;
    }
}