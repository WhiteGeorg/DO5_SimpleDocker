## Part 2
-   read nginx.conf into container from exec.
![
](resorces/02_01cat.png)

- create nginx.conf.
![alt text](resorces/02_02touch.png)

- configure /status link
![alt text](resorces/02_03.v3.server.png)

- cp into container 
![alt text](resorces/02_03cp.png)

- resolve conflict 
![alt text](resorces/02_04delete_conflict.png)

- reload container
![alt text](resorces/02_05reload.png)

- check out /status Path
![alt text](resorces/02_06status.png)

- export 
![alt text](resorces/02_07export.png)

- stop 
![alt text](resorces/02_08stop.png)

- remove image 
![alt text](resorces/02_09.1rmi.png)

- remove container 
![alt text](resorces/02_09.2rm.png)

- import 
![alt text](resorces/02_10import.v2.png)

- ```docker import теряет команду запуска (CMD/ENTRYPOINT), которая была в оригинальном образе nginx```
- run 
![alt text](resorces/02_10run.png)

- check out /status
![alt text](resorces/02_11curl.png)