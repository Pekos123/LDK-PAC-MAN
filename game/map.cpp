class Map
{
    private:
        const int width = 24; // adapt this to screen size
        const int height = 24; // adapt this to screen size
        const static int numberOfWaypoints = 32;
    public:
        Waypoint allWaypoints[numberOfWaypoints];
};