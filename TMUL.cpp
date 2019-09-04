#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); cin.tie(NULL); start(); return 0; } 

int toInt(char x) {
  return x - '0';
}
void print(int* bucket, int len) {
    bool skipped = false;
    for(int i = 0; i < len; ++i) {
      if(bucket[i] == 0 && !skipped)
        continue;
      if(!skipped)
        skipped = true;
      cout << bucket[i];
    }
    if(!skipped) cout << 0;
    cout << endl;
}
void addToBucket(int* bucket, int alen, int blen, int i, int j, int tmpSum) {
  int r;
  for(int k = 0; tmpSum != 0; ++k) {
    r = tmpSum % 10;
    tmpSum /= 10;
    //int pos = blen-k+i+(blen-j);//+blen-j-1;
    int pos = i+j-k+1;
    //cout << "<" << pos << ">";
    int z = bucket[pos] + r;
    if(z >= 10) {
      bucket[pos-1]++;
      bucket[pos] += r - 10;
    } else {
      bucket[pos] += r;
    }
  }
}
void start() {
  int n; cin >> n;
  while(n--) {
    string a, b;
    cin >> a >> b;
    int alen = a.length();
    int blen = b.length();
    if(alen+blen<9) {
      cout << atoi(a.c_str()) * atoi(b.c_str()) << endl;
      continue;
    }
    //ll tmpSum;
    int *aBucket = new int[alen];
    fill(aBucket, aBucket+alen, 0);
    int *bBucket = new int[blen];
    fill(bBucket, bBucket+blen, 0);
    int *tmpBucket = new int[alen + blen];
    fill(tmpBucket, tmpBucket+alen+blen, 0);
    for(int i = 0; i < alen; ++i) {
       aBucket[i] = toInt(a[i]);
    }
    for(int j = 0; j < blen; ++j) {
       bBucket[j] = toInt(b[j]);
    }
    for(int i = alen - 1; i >= 0; --i) {
      for(int j = blen - 1; j >= 0; --j) {
        ll f = aBucket[i] * bBucket[j];// * pow(10, (blen - j - 1));
        //cout << endl;
        //cout << '|' << f;
        //cout << f << " | ";
        addToBucket(tmpBucket, alen, blen, i, j, f);
      }
    }
    print(tmpBucket, alen + blen);
    delete[] aBucket;
    delete[] bBucket;
    delete[] tmpBucket;
  }
}
