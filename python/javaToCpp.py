def path(sr, sc, er, ec, s, maze):
    if sr < 0 or sc < 0:
        return
    if sr > er or sc > ec:
        return
    if maze[sr][sc] == 0:
        return
    if maze[sr][sc] == -1:
        return
    if sr == er and sc == ec:
        print(s)
        return

    maze[sr][sc] = -1
    # right
    path(sr, sc + 1, er, ec, s + "R", maze)
    # down
    path(sr + 1, sc, er, ec, s + "D", maze)
    # left
    path(sr, sc - 1, er, ec, s + "L", maze)
    # up
    path(sr - 1, sc, er, ec, s + "U", maze)
    # Backtracking
    maze[sr][sc] = 1


if __name__ == "__main__":
    rows = 4
    cols = 6
    maze = [
        [1, 0, 1, 1, 1, 1],
        [1, 1, 1, 1, 0, 1],
        [0, 1, 1, 1, 1, 1],
        [0, 0, 1, 0, 1, 1],
    ]
    path(0, 0, rows - 1, cols - 1, "", maze)