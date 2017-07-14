for i=1:16
   pre = input(i,1:4); 
   yfit = trainedClassifier.predictFcn(pre);
   if yfit == 1
        str = 'Hello';
        elseif yfit == 2
             str = 'Avinash';
        else
           str = int2str(yfit);  
   end
      
   Speak(obj, str);
  % pause(1);
end
  
