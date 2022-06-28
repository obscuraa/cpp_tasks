x = [1 2 4];
% Data points
y = [2 5 10];
% Equation
X = [ones(size(x));
     x
     x.^2
     x.^3
     x.^4
     x.^5];

Y = y;

theta = Y * pinv(X);

f = @(x) theta(1) + theta(2)*x + theta(3)*x.^2 + theta(4)*x.^3 + theta(5)*x.^4 + theta(6)*x.^5;

xx = linspace(0, 5, 100);
yy = f(xx);

% Graph
figure;
plot(x,y, 'or', 'MarkerSize', 10, 'DisplayName', 'Data Points');
hold on;
plot(xx,yy, 'b', 'LineWidth', 2, 'DisplayName', 'Equation');
xlabel('x');
ylabel('y');
grid on;
legend show;