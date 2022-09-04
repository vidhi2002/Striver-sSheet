class Solution {
public:
    using triple = tuple<int,int,int>;
    bool isRectangleCover(vector<vector<int>>& rects) {
      int n = rects.size();
      vector<triple> borders;
      for (auto& rect: rects) {
        triple in_border = {rect[0], rect[1], rect[3]-rect[1]};
        triple out_border = {rect[2], rect[1], rect[1]-rect[3]};
        borders.push_back(in_border);
        borders.push_back(out_border);
      }
      sort(borders.begin(), borders.end());
      auto [start_x, start_y, start_h] = borders[0];
      int low = start_y, high = start_y + start_h;
      int idx = 1;
      for (; idx < borders.size(); ++idx) {
        auto [x, y, h] = borders[idx];
        if (x == start_x && h > 0)  {
          if (y == high) {
            high += h;
          } else {
            return false;
          }
        } else {
          break;
        }
      }
      int cut_x = INT_MIN, cut_low = INT_MIN, cut_high = INT_MIN;
      for (; idx < borders.size(); ++idx) {
        auto [x, y, h] = borders[idx];
        if (h > 0) {
          if (cut_low >= cut_high) {
            return false;
          } else if (cut_x == x && cut_low == y) {
            cut_low += h;
          } else {
            return false;
          }
        } else {
          if (cut_low == cut_high) {
            cut_x = x;
            cut_low = y;
            cut_high = y-h;
          } else if (cut_x == x && cut_high == y) {
            cut_high -= h;
          } else {
            return false;
          }
          if (cut_low < low || cut_high > cut_high) {
            return false;
          }
        }
      }
      return cut_low == low && cut_high == high;
    }
};