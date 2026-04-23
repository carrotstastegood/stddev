/*
Copyright © 2026 <carrotstastegood>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation
files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy,
modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include <vector>
#include <string>
#include <iostream>
#include <cmath>

using std::vector;
using std::string;

namespace stats {

    float stddev(vector<float> v) {
        float samplesize = 0;
        float x;
        float y = 0;
        float mean;
        float variance;
        vector<float> deviants;

        for (int i = 0; i < v.size(); i++) {
            samplesize += v[i];
        }

        mean = (samplesize / v.size());

        // Find deviation. 
        for (int i = 0; i < v.size(); i++) {
            // Subtract number by mean, then square.
            x = v[i] - mean;
            x = x * x;
            y += x;
        }
        
        std::cout << "Sample Size: " << samplesize << "\n";
        std::cout << "Mean: " << mean << "\n";

        variance = (y / v.size());
        return sqrt(variance); 
    }

}