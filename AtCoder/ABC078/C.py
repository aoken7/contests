#開設みて回答

import numpy as np

n,m = map(int,input().split())

ans = (1900 * m + 100 * (n - m)) * pow(2,m)

print(ans)