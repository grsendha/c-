class Solution
{
public:
	bool checkInclusion(string s, string p)
	{
		int N = s.size();
		int k = p.size();
		int i = 0, j = 0;
		unordered_map<char, int> m;
		vector<int> v;
		for (auto x : p)
		{
			m[x]++;
		}
		int count = m.size();
		while (j < N)
		{
			if (m.find(s[j]) != m.end())
			{
				m[s[j]]--;
				if (m[s[j]] == 0)
					count--;
			}

			if (j - i + 1 < k)
				j++;
			else if (j - i + 1 == k)
			{
				if (count == 0)
					return true;
				if (m.find(s[i]) != m.end())
				{
					m[s[i]]++;
					if (m[s[i]] == 1)
						count++;
				}
				i++;
				j++;
			}
		}
		return false;
	}
};