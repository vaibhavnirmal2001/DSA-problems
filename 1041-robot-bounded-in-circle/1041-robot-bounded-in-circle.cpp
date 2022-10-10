class Solution {
public:
    bool isRobotBounded(string instructions)
    {
        vector position = {0, 0}, direction = {0, 1};
        
        for (size_t i = 0; i < instructions.length(); i++)
        {
            switch(instructions[i])
            {
                case 'L':
                    direction = {-direction[1], direction[0]};
                    break;
                case 'R':
                    direction = {direction[1], -direction[0]};
                    break;
                default:
                    position = {position[0] + direction[0], position[1] + direction[1]};
            }
        }
        return  (position[0] == 0 && position[1] == 0) || (direction[0] != 0 || direction[1] != 1) ? true : false;
    }
};