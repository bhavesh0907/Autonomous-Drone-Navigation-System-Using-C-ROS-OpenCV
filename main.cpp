#include "drone_control.h"
#include "obstacle_detection.h"
#include "path_planning.h"
#include "sensor_interface.h"

int main() {
    initializeSensors();
    initializeDrone();
    
    while (true) {
        auto obstacles = detectObstacles();
        auto path = planPath(obstacles);
        moveDrone(path);
    }
    return 0;
}
