class Robot {
    int dir = 0, dirs[4][2] = {{1,0},{0,1},{-1,0},{0,-1}}, w, h, perimeter, x = 0, y = 0;
    string text[4] = {"East","North","West","South"};
public:
    Robot(int width, int height) : w(width), h(height), perimeter(2*(w + h - 2)) {}
    void move(int k) {
        if (k >= perimeter) {
            k %= perimeter;
            if (x == 0 && y == 0 && dir == 0) dir = 3; // Special case: if we are at the beginning (x = 0, y = 0 and facing east), after the round trip, the direction becomes south.
        }
        while (k > 0) {
            auto &[dx, dy] = dirs[dir];
            int nx = x + dx, ny = y + dy;
            if (nx < 0 || ny < 0 || nx >= w || ny >= h) {
                dir = (dir + 1) % 4;
            } else {
                x = nx, y = ny;
                --k;
            }
        }
    }
    vector<int> getPos() {
        return {x,y};
    }
    string getDir() {
        return text[dir];
    }
};