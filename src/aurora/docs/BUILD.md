# Build

```
make -C aurora-network
make -C aurora-storage
(cd aurora-compute && go build ./...)
(cd aurora-identity && mvn -q package)
(cd aurora-portal && pip install -r requirements.txt)
(cd aurora-cli && npm install)
```
