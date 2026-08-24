class Solution {
public:
    bool judgeCircle(string moves) {
        if (moves.length() & 1) return false;
        int x = 0, y = 0;

        for (char c : moves) {
            y += (c == 'U') - (c == 'D');
            x += (c == 'R') - (c == 'L');
        }

        return !x && !y;
    }
};

/*
bool judgeCircle(string moves) {
    int x = 0, y = 0;

    for (char c : moves) {
        if (c == 'U') y++;
        if (c == 'D') y--;
        if (c == 'R') x++;
        if (c == 'L') x--;
    }

    return x == 0 && y == 0;
}
*/