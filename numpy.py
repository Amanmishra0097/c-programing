import numpy as np
a = np.array([1.1, 2.1, 3.1])
b= a.astype(int)          # or      a.astype(‘i’)
print(b)                       #[1 2 3] 
print(b.dtype) 
import numpy as np
a = np.array([1, 0, 3])
b = a.astype(bool)
print(b)                         #[True False True] 
print(b.dtype)

