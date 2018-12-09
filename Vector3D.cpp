
class Vector3D {
  public:
    void set_x(int new_x) {
      x = new_x;
    }

    void set_y(int new_y) {
      y = new_y;
    }

    void set_z(int new_z) {
      z = new_z;
    }

    int get_x() {
      return x;    
    }

    int get_y() {
      return y;    
    }

    int get_z() {
      return z;    
    }

  private:
    int x;
    int y;
    int z;
};
