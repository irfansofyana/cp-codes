#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c,d,e,i;
	string s;
	bool p=false,q=false;
	
	a=0;
	cin>>s;
	while ((a<=s.length()-1) && (!p))
		{
			if (a==s.length()-1)
				p=true;
			if (s[a]=='h')
				{
					b=a+1;
					while ((b<=s.length()-1) && (!p))
						{
							if (b==s.length()-1)
								p=true;
							if (s[b]=='e'){
									c=b+1;
									while ((c<=s.length()-1) && (!p))
										{
											if (c==s.length()-1)
												p=true;
											if (s[c]=='l'){
												d=c+1;
												while ((d<=s.length()-1) && (!p))
													{
														if (d==s.length()-1)
															p=true;
														if (s[d]=='l')
															{
																e=d+1;
																while ((e<=s.length()-1) && (!p))
																	{
																		if (s[e]==s.length()-1)
																			p=true;
																		if (s[e]=='o')
																			q=true;
																		else
																		e++;
																	
																	}
															
															}
														else
														d++;
													
													}
											}
											else
											c++;
										}
							}
							else
								b++;
						}
				}
			else
				a++;
		}
	if (q)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}