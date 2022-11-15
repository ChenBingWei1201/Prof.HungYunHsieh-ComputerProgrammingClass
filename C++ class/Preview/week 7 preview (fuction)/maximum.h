template <typename T>
T maximum(T x, T y, T z)
{
T maxvalue = x;
if (y > maxvalue) maxvalue = y;
if (z > maxvalue) maxvalue = z;
return maxvalue;
}
