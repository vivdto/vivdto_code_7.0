
//Friends Pairing Problem
int pairFriends(int n) {
    if(n == 1 || n == 2) {
        return n;
    }

    return pairFriends(n-1) + (n-1) * pairFriends(n-2);
}
