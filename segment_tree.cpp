void build(int v, int l, int r) {
  if (l == r) {
    seg[v] = arr[l];
  } else {
    int mid = (l+r)/2;
    build(2*v,l,mid);
    build(2*v+1,mid+1,r);
    seg[v] = max(seg[2*v], seg[2*v+1]);
  }
}

void query(int v, int l, int r, int x, int y){
  if (y < l || x > r) return 0;
  if (x <= l && r <= y) return seg[v];
  int mid = (l+r)/2;
  return max(query(2*v,l,mid,x,y), query(2*v+1,midd+1,r,x,y));
}
