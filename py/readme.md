## getting started

### first time
- python -m venv .venv
- source .venv/bin/activate
- pip install pytest
- pip install pytest-watcher

### thereafter
- source .venv/bin/activate


## to run 
- ptw . # to run all
- ptw -clear . -- test_gen.py # to run just the one

### todo use pip freeze requirements.txt^^
- pip freeze >requirements.txt
- pip install -r requirements.txt

