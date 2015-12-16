#define swap(x,y) {int t = a; a = b; b = t}
#define order(x, y) if(x > y) swap(x, y)
#define o2(x, y) order(x, y)
#define o3(x, y, z) o2(x, y); o2(x, z); o2(y, z);

typedef enum {yes, no} yes_no;

static yes_no find_pivot(int *left, int *right, int *pivot_ptr);
static int *partion(int *left, int *right, int pivot);

