from typing import List

class Robot:

    def __init__(self, width: int, height: int):
        self.w = width
        self.h = height
        self.x = 0
        self.y = 0
        self.dir = 0
        self.perimeter = 2 * (self.w + self.h) - 4
        self.moved = False

    def step(self, num: int) -> None:
        if self.perimeter == 0:
            return

        num %= self.perimeter

        if num == 0:
            num = self.perimeter

        self.moved = True

        for _ in range(num):

            if self.dir == 0:
                if self.x + 1 < self.w:
                    self.x += 1
                else:
                    self.dir = 1
                    self.y += 1

            elif self.dir == 1:
                if self.y + 1 < self.h:
                    self.y += 1
                else:
                    self.dir = 2
                    self.x -= 1

            elif self.dir == 2:
                if self.x - 1 >= 0:
                    self.x -= 1
                else:
                    self.dir = 3
                    self.y -= 1

            else:
                if self.y - 1 >= 0:
                    self.y -= 1
                else:
                    self.dir = 0
                    self.x += 1

    def getPos(self) -> List[int]:
        return [self.x, self.y]

    def getDir(self) -> str:
        if not self.moved:
            return "East"

        if self.x == 0 and self.y == 0:
            return "South"

        dirs = ["East", "North", "West", "South"]
        return dirs[self.dir]