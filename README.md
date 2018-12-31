
## Introduction

This is a simple hello world app for C++ using JSON. We're using this amazing JSON library by Niels Lohmann which is a single json.hpp header file.

https://github.com/nlohmann/json

## Usage 

Build and run on linux with

```
  g++ hw.cpp -o hw
  ./hw
```

## Output 

```
7 elements
{
    "Favorite Numbers": [
        1,
        2,
        3
    ],
    "Friends": [
        {
            "name": "Kevin",
            "number": 1
        },
        {
            "name": "Tom",
            "number": 2
        }
    ],
    "Installed Apps": {
        "games": [
            "Hell Divers",
            "Vermintide"
        ]
    },
    "New List": [
        1,
        2,
        3,
        4,
        5
    ],
    "None": null,
    "True": true,
    "User": "Mark"
}
```

