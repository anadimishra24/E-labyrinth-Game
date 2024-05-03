```bash
cgb2-user41@instance-1:~/new_anadi/code/SRC$ splint menu_Maze.c
Splint 3.1.2 --- 21 Feb 2021

Finished checking --- no warnings
```

```bash
cgb2-user41@instance-1:~/new_anadi/code/SRC$ splint bomb_dead.c
Splint 3.1.2 --- 21 Feb 2021

bomb_dead.c: (in function bombsuggest)
bomb_dead.c:15:13: Unrecognized identifier: ans
  Identifier used in code has not been declared. (Use -unrecog to inhibit
  warning)
bomb_dead.c:15:17: Unrecognized identifier: a
bomb_dead.c:15:20: Unrecognized identifier: b
bomb_dead.c:13:5: Variable exported but not used outside bomb_dead: ex
  A declaration is exported, but not used outside this module. Declaration can
  use static qualifier. (Use -exportlocal to inhibit warning)

Finished checking --- 4 code warnings
```

```bash
cgb2-user41@instance-1:~/new_anadi/code/SRC$ splint readMazeCSV.c
Splint 3.1.2 --- 21 Feb 2021

readMazeCSV.c:20:9: Unrecognized identifier: MAX_ROW
  Identifier used in code has not been declared. (Use -unrecog to inhibit
  warning)
readMazeCSV.c:20:18: Unrecognized identifier: MAX_COL
readMazeCSV.c: (in function readMazeCSV)
readMazeCSV.c:37:17: Unrecognized identifier: LINE_BUFFER
readMazeCSV.c:50:36: Function fgets expects arg 2 to be int gets size_t:
                        sizeof((buffer))
  To allow arbitrary integral types to match any integral type, use
  +matchanyintegral.
readMazeCSV.c:20:27: Variable exported but not used outside readMazeCSV: ans
  A declaration is exported, but not used outside this module. Declaration can
  use static qualifier. (Use -exportlocal to inhibit warning)
readMazeCSV.c:21:5: Variable exported but not used outside readMazeCSV: temp
readMazeCSV.c:21:13: Variable exported but not used outside readMazeCSV: var
readMazeCSV.c:22:5: Variable exported but not used outside readMazeCSV: row
readMazeCSV.c:22:12: Variable exported but not used outside readMazeCSV: col
readMazeCSV.c:27:5: Function exported but not used outside readMazeCSV: max
   readMazeCSV.c:32:1: Definition of max

Finished checking --- 10 code warnings
```

```bash
cgb2-user41@instance-1:~/new_anadi/code/SRC$ splint read_Square_Rectangle_Maze.c
Splint 3.1.2 --- 21 Feb 2021

read_Square_Rectangle_Maze.c: (in function square)
read_Square_Rectangle_Maze.c:16:17: Unrecognized identifier: mode
  Identifier used in code has not been declared. (Use -unrecog to inhibit
  warning)
read_Square_Rectangle_Maze.c:19:38: Unrecognized identifier: readMazeCSV
read_Square_Rectangle_Maze.c:40:17: Statement has no effect: EXIT_SUCCESS
  Statement has no visible effect --- no values are modified. (Use -noeffect to
  inhibit warning)
read_Square_Rectangle_Maze.c:42:17: Unreachable code: break
  This code will never be reached on any possible execution. (Use -unreachable
  to inhibit warning)
read_Square_Rectangle_Maze.c:46:3: Unrecognized identifier: readfile
read_Square_Rectangle_Maze.c: (in function rectangle)
read_Square_Rectangle_Maze.c:78:17: Statement has no effect: EXIT_SUCCESS

Finished checking --- 6 code warnings
cgb2-user41@instance-1:~/new_anadi/code/SRC$
```
